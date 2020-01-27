#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s;
    vector<string> t;

    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        s.push_back(a);
    }
    
    for(int i=0;i<m;i++){
        string a;
        cin>>a;
        t.push_back(a);
    }

    int q;
    cin>>q;

    while(q--){
        int a;
        cin>>a;

        int s1 = a%n;
        int t1 = a%m;
        string x="";
        string y="";

        if(s1==0) x = s[n-1];
        else{
            x = s[s1-1];
        }
        if(t1==0) y = t[m-1];
        else{
            y = t[t1-1];
        }

        cout<<x+y<<endl;
    }
}