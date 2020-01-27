#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,x,y;
    int k=0;
    cin>>n;
    cin>>x;
    cin>>y;
    string s;
    cin>>s;
    int w = pow(10,x);
    int e = pow(10,y);
    string s2 = to_string(e);
    string s1= to_string(w);
    int b = s1.length();
    int c = s2.length();
    for(int i=s.length()-1;i>s.length()-b;i--){
        if(i==s.length()-c){
            if(s[i]=='0'){
                s[i]='1';
                k++;
            }

        }
        else{
            if(s[i]=='1'){
                s[i]='0';
                k++;
            }

        }
        
    }
    cout<<k;


}