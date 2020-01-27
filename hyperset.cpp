#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    vector<string> v;
 
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int ans =0;
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int count =0;
            if(dp[i][j]==-1) continue;
            for(int p=0;p<k;p++){
                if((v[i][p]!=v[j][p]) || (v[i][p]==v[j][p])){
                    dp[i][j]=1;
                    dp[j][i]=1;
                    count++;
                }
                else{
                    dp[i][j]=-1;
                    dp[j][i]=-1;
                    break;
                }
            }
            for(int l=j+1;l<n;l++){
                if(dp[i][l]==-1 || dp[j][l]==-1) continue;
                if(dp[i][l]==1 || dp[j][l]==1){
                    ans++;
                    continue;
                }
                int c=0;
                for(int p=0;p<k;p++){
                    if((v[i][p]!=v[j][p] && v[j][p]!=v[l][p] && v[i][p]!=v[l][p]) || (v[i][p]==v[j][p] && v[i][p]==v[l][p])){
                        c++;
                    }
                    else break;
                }
                if(c==k) {
                    dp[i][l]=1;
                    dp[j][l]=1;
                    dp[l][j]=1;
                    dp[l][i]=1;
                    ans++;
                }
                else{
                    dp[i][l]=-1;
                    dp[j][l]=-1;
                    dp[l][j]=-1;
                    dp[l][i]=-1;
                }
            }
        }
    }
 
    cout<<ans<<endl;
}