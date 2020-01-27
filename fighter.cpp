#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n,p;
        cin>>n>>p;

        priority_queue<ll,vector<ll>,greater<ll>> v;

        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v.push(a);
        }

        ll count =0;

        while(p>=v.top() && !v.empty()){
            p-=v.top();
            v.pop();
            count++;
        }
        cout<<count<<endl;
    }
}