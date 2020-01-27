#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        unsigned long long int s = a*1 + b*2 + c*3;

        if(s%2!=0) cout<<"NO"<<endl;
        else{
            int count=1;
                
                while(c>1){
                    c-=2;
                }
                if(c==1 && b!=0 && a!=0){
                    c--;
                    b--;
                    a--;
                }
                else if(c==1 && a>=3){
                    c--;
                    a-=3;
                }
                else if(c==1)count=0;

                while(b>1){
                    b-=2;
                }
                if(b==1 && a>=2){
                    b--;
                    a-=2;
                }
                else if (b==1) count=0;


                while(a>0){
                    a-=2;
                }
                if(a<0) count= 0;

            if(count==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            }

    }
}