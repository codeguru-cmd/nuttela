#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,c;
    cin>>l>>c;
    string s;
    cin>>s;

    int i =0;
    if(l==1 && c>0) cout<<0<<endl;
    else{
    while(c-- && i<l){
        if(i==0){
            if(s[i]=='1') c++;
            else s[i]='1';
        }
        else{
            if(s[i]=='0') c++;
            else s[i]='0';
        }
        i++;
    }

    cout<<s<<endl;
    }
}