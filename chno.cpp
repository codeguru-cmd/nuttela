#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;

    while(t--){
        ll a,m,count=0;
        vector<ll> v;
        cin>>a>>m;

        ll d = m%a;
        ll n = m/a;

        ll i =n;

        while(i>0 && 2*i*a>=m){
            if((m-i*a)>0 && i%(m-i*a)==0){
                v.push_back(i);
                count++;
            }
            i--;
        }

        cout<<count<<endl;

        for(int j=count-1;j>=0;j--) cout<<v[j]<<' ';

        cout<<endl;
    }
}