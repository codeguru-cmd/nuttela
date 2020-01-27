#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int ans =0;

    if(e>=f){
        int p = min(a,d);
        ans+= p*e;
        a-=p;
        d-=p;
        p = min({b,c,d});
        ans+=p*f;
        b-=p;
        c-=p;
        d-=p;
    }
    else{
        int p = min({b,c,d});
        ans+=p*f;
        b-=p;
        c-=p;
        d-=p;
        p = min(a,d);
        ans+= p*e;
        a-=p;
        d-=p;
    }

    cout<<ans<<endl;

}
