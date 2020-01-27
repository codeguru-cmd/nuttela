#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s,k;
        cin>>n>>s>>k;
        vector<int> v(n+1,0);
        v[0]=-1;
        int ans = INT_MAX;
        for(int i=0;i<k;i++){
            int a;
            cin>>a;
            v[a]=-1;
        }
        for(int i=1;i<=n;i++){
            if(v[i]==0) {
                ans = min(ans,abs(s-i));
                if(i>s+ans) break;
            }
        }
        cout<<ans<<endl;
    }
}
