#include <bits/stdc++.h>
using namespace std;

long long int tun(int n,int i,int k,vector<long long int>&dp,vector<string> v,int count[][1000]){
    if(i==n-1){
        return 0;
    }

    int j=min(i+k,n-1);

    while(j>=0 && j>=i-k && dp[i]==n+1){
        if(v[i][j]=='1' && j!=i){
            if(count[i][j]==1) return (long long int)-1;
            count[i][j]=1;
            if(tun(n,j,k,dp,v,count)!=-1){
                long long int l=tun(n,j,k,dp,v,count)+1;
                dp[i]=min(l,dp[i]);
            } 
        }
        j--;
    }
    if(dp[i]==n+1) dp[i]=-1;
    return dp[i];
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string> v;
        vector<long long int>dp(n,n+1);
        int count[1000][1000]={0};

        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }

        for(int i=min(k,n-1);i>0;i--){
            if(v[0][i]=='1'){
                count[0][i]=1;
                long long int l=tun(n,i,k,dp,v,count)+1;
                if(l!=0) dp[0]=min(l,dp[0]); 
            }
        }
        if(dp[0]!=n+1) cout<<dp[0]<<endl;
        else cout<<-1<<endl;
    }
}