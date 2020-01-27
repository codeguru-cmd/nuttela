#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> dp(n);
        long long int sum1=0;
        long long int sum2=0;
        int j=1;

        for(int i=0;i<n;i++){
            long long int a;
            cin>>a;
            sum1+=a;
            sum2+=a;
            dp[i]=sum2;
            if(sum2<=0) {
                j=0;
                sum2=0;
            }
        }
        int k=1;

        for(int i=0;i<n;i++){
            if(dp[i]>sum1) {
                cout<<"NO"<<endl;
                k=0;
                break;
            }
            if(dp[i]==sum1 && (i!=n-1 || (i==n-1 && j==0))){
                cout<<"NO"<<endl;
                k=0;
                break;
            }
        }

        if(k==1) cout<<"YES"<<endl;
        
    }
}