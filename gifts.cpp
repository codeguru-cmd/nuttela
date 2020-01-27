#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;
    long long int v = n*m;
    long long int tot =2;
    long long int carry =1;

    if(m%2!=0 && m>1){
        carry = carry*tot;
        m--;
    }
    while(m>1 && m%2==0){
        tot = ((long long int)pow(tot,2))%1000000007;
        m=m/2;
        if(m%2!=0 && m>1){
            carry = (carry*tot)%1000000007;
            m--; 
        }
    }
    tot = (tot*carry)%1000000007;

    tot--;
    carry =1;

    if(n%2!=0 && n>1) {
       carry = (carry*tot)%1000000007;
       n--;
    }

    while(n>1){
        tot = ((long long int)pow(tot,2))%1000000007;
        n=n/2;
        if(n%2!=0 && n>1){
            carry = (carry*tot)%1000000007;
            n--;
        }
    }

    tot = (tot*carry)%1000000007;

   cout<<tot<<endl;
}