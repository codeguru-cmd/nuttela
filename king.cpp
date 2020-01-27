#include<bits/stdc++.h>
using namespace std;

int mat[210][210];
int dp[210][210];

int dp2[2010][210][210];

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

int ways(int s, int x, int y){
     if(s<0) return 0;
     if(x==0 and y==0){
          if(s==0) return 1;
          return 0;
     }

     int&ans=dp2[s][x][y];
     if(ans!=-1) return ans;

     ans=0;
     
     if(x-1>=0  and y>=0  and mat[x-1][y]!=-1) ans +=ways(s-mat[x][y], x-1, y);
     if(x>=0  and y-1>=0  and mat[x][y-1]!=-1) ans +=ways(s-mat[x][y], x, y-1);
     if(x-1>=0  and y-1>=0  and mat[x-1][y-1]!=-1) ans +=ways(s-mat[x][y], x-1, y-1);
     return ans;
}


int main(){
     int t;
     cin>>t;
     while(t--){
         
          memset(dp, -1, sizeof(dp));
          memset(dp2, -1, sizeof(dp2));
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
          if(mx<0) cout<<0<<" "<<0<<endl;
         else{
              cout<<mx<<" "; 
              int res = ways(mx, n-1, n-1);
              cout<<res<<endl;
         }
          
     }
}