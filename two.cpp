#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a =0;
        long long n;
        cin>>n;
        long long y=0;
        long long x=sqrt(0)+1;
        while(1){
            if((y+pow(x,2))>=n*n) break;
            if(pow(x,2)>y){
                a++;
                y+= pow(x,2);
                x = sqrt(y)+1;
            }
        }
        cout<<a+1<<endl;
    }
}