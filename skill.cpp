#include<bits/stdc++.h>
using namespace std;

int mat[210][210];
int dp[210][210];

int f(int x, int y){
    if(x==0 and y==0){
        return 0;
    }
     int&ans=dp[x][y];

     if(ans!=-1) return ans;
     ans=-1e7;
     if(x-1>=0  and y>=0  and mat[x-1][y]!=-1) ans = max(ans, f(x-1, y)+mat[x][y]);
     if(x>=0  and y-1>=0  and mat[x][y-1]!=-1) ans = max(ans, f(x, y-1)+mat[x][y]);
     if(x-1>=0  and y-1>=0  and mat[x-1][y-1]!=-1) ans = max(ans, f(x-1, y-1)+mat[x][y]);
     return ans;
}


int main(){
     int t;
     cin>>t;
     while(t--){
         
          memset(dp, -1, sizeof(dp));
          int n;
          cin>>n;
          for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  string temp;
                  cin>>temp;
                  
                  if(temp[0]-'0'>=0 and temp[0]-'9'<=9){
                      mat[i][j]=temp[0]-'0';
                  }
                  else mat[i][j]=-1;              
              }           
          }
          mat[0][0]=0;
          mat[n-1][n-1]=0;

          int mx=f(n-1, n-1);
         
          dp[0][0]=0;
         
          if(mx<0) cout<<0<<" "<<0<<endl;
          else{
               cout<<mx<<" "; 
              
               int dp2[210][210];
               dp2[0][0]=1;
               for(int i=0;i<n;i++){
                    dp2[0][i]=1;
                    dp2[i][0]=1;
               }

               for(int i=1;i<n;i++){
                    for(int j=1;j<n;j++){
                         int temp=0;
                         int mx=dp[i][j];
                         int val=mat[i][j];
                         if(dp[i-1][j]==mx-val)temp+=dp2[i-1][j];
                         if(dp[i][j-1]==mx-val)temp+=dp2[i][j-1];
                         if(dp[i-1][j-1]==mx-val)temp+=dp2[i-1][j-1];

                         dp2[i][j]=temp;
                    }
               }
               cout<<dp2[n-1][n-1]<<endl;
          }
     }
}