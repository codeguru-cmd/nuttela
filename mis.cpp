#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin>>n;
    
    vector<ll> v;
    ll count1=0;
    ll count2=0;
    ll in=0;
    ll dec=INT_MAX;
    
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a>in){
            count1++;
            in = a;
        }
        if(a<dec){
            count2++;
            dec=a;
        }
    }
    
    cout<<min(n-count1,n-count2);
    
}