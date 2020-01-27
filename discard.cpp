#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    int l=1;
    int p=k;
    int b=0;
    int c=0;
    int o=0;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(a-c<=p) {
            b++;
            o++;
        }
        if(a-c>p) {
            if(o>0){
                l++;
                o=0;
            }
            c=b;
            if(a-c<=p){
                b++;
                o++;
            }
            else{
                while(a-c>p)p+=k;
            }
        }
    }
    cout<<l;


}