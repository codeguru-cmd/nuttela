#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll l;
        ll r;
        cin>>l>>r;
        ll sum2;

        ll sum1 = (((((r%1000000007)*((r+1)%1000000007)%1000000007)*(r+2)%1000000007)*(r+3)%1000000007)*(r+4)%1000000007);
        if(l==1) sum2 =0; 
        else sum2 = ((((((l-1)%1000000007)*((l)%1000000007)%1000000007)*(l+1)%1000000007)*(l+2)%1000000007)*(l+3)%1000000007);

        cout<<((sum1%1000000007-sum2%1000000007)/5)<<endl;
    }
}