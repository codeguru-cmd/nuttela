#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    int n=0;
    for(int i =0;i<s.length();i++){
        if(s[i]== '4'|| s[i]=='7')
            n++;
    }
    if(n==s.length()) cout<<"YES";
    else{
        int a = stoi(s);
        if(a%4==0) cout<<"YES";
        else if(a%7==0) cout<<"YES";
        else if(a%47==0) cout<<"YES";
        else if(a%74==0) cout<<"YES";
        else if(a%444==0) cout<<"YES";
        else if(a%447==0) cout<<"YES";
        else if(a%474==0) cout<<"YES";
        else if(a%477==0) cout<<"YES";
        else if(a%744==0) cout<<"YES";
        else if(a%747==0) cout<<"YES";
        else if(a%774==0) cout<<"YES";
        else if(a%777==0) cout<<"YES";
        else cout<<"NO";
    }
    
}