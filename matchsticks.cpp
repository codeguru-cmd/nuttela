#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a,b;
        cin>>a>>b;
        
        long long int sum = a + b;
        long long int count =0;

        while(sum){
            int c = sum%10;
            sum = sum/10;

            if(c==0) count+=6;
            else if(c==1) count+=2;
            else if(c==2) count+=5;
            else if(c==3) count+=5;
            else if(c==4) count+=4;
            else if(c==5) count+=5;
            else if(c==6) count+=6;
            else if(c==7) count+=3;
            else if(c==8) count+=7;
            else if(c==9) count+=6;
        }

        cout<<count<<endl;
    }
}
