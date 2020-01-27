#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,a,b,c;
        cin>>n>>a>>b>>c;
        long long int ans =INT_MAX;
        for(int i=0;i<n;i++){
            long long int f;
            cin>>f;
            long long int a1=abs(b-f);
            long long int a2=abs(f-a);
            ans = min(ans,a1+a2);
        }
        cout<<ans+c<<endl;
    }
}