#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        vector<ll> m;
        ll mi = INT_MAX;

        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v.push_back(a);
            if(a<mi){
                m.push_back(i);
                mi = a;
            }
            else m.push_back(m[m.size()-1]);
        }

        ll ans = 0;
        int i =m.size()-1;
        int count =0;

        while(i>=0 && v[m[i]]-count>0){
            ans += (v[m[i]]-count)*(i+1);
            count+= (v[m[i]]-count);
            i =  m[i]-1;
        }

        cout<<ans<<endl;
    }
}