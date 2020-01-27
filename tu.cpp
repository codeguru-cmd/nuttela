#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,r;
        cin>>a>>b>>c>>r;

        int x1 = c-r,x2=c+r;
        int ans =0;
        
        if(min(a,b)>=x1 && max(a,b)<=x2) ans =0;
        else if((c>=a && c<=b)){
            if(x1>=a) ans+= x1-a;
            if(x2<=b) ans+= b - x2;    
        }
        else if((c>=b && c<=a)){
            if(x2<=a) ans+= a -x2;
            if(x1>=b) ans+= x1-b;
        }
        else if(c<a && c<b){
            if(x2<min(a,b)) ans+= abs(b-a);
            else ans += max(a,b)-x2;
        }
        else if(c>a && c>b){
            if(x1>max(a,b)) ans+=abs(a-b);
            else ans+= x1-min(a,b);
        }

        cout<<ans<<endl;
    }
}