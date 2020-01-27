#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<string> M;
    M.push_back(s1);
    M.push_back(s2);
    M.push_back(s3);
    vector<int> m;
    vector<int> p;
    vector<int> s;
    int max=0;

    for(int i=0;i<M.size();i++){
        if(M[i][1]=='m') m.push_back(M[i][0]);
        else if(M[i][1]=='p') p.push_back(M[i][0]);
        else if(M[i][1]=='s') s.push_back(M[i][0]);
    }
    int l1=1;
    int k1=1;

    sort(m.begin(),m.end());
    sort(p.begin(),p.end());
    sort(s.begin(),s.end());

    if(m.size()==3){
        if(m[0]==m[1] && m[1]==m[2]) cout<<0;
        else if(m[1]==m[0]+1 && m[2]==m[1]+1) cout<<0;
        else if(m[1]==m[0]+2 || m[2]==m[1]+2) cout<<1;
        else if(m[1]==m[0] || m[1]==m[2])cout<<1;
        else if(m[1]==m[0]+1 || m[2]==m[1]+1) cout<<1;
        else cout<<2;
    }
    else if(p.size()==3){
        if(p[0]==p[1] && p[1]==p[2]) cout<<0;
        else if(p[1]==p[0]+1 && p[2]==p[1]+1) cout<<0;
        else if(p[1]==p[0]+2 || p[2]==p[1]+2) cout<<1;
        else if(p[1]==p[0] || p[1]==p[2])cout<<1;
        else if(p[1]==p[0]+1 || p[2]==p[1]+1) cout<<1;
        else cout<<2;
    }
    else if(s.size()==3){
        if(s[0]==s[1] && s[1]==s[2]) cout<<0;
        else if(s[1]==s[0]+1 && s[2]==s[1]+1) cout<<0;
        else if(s[1]==s[0]+2 || s[2]==s[1]+2) cout<<1;
        else if(s[1]==s[0] || s[1]==s[2])cout<<1;
        else if(s[1]==s[0]+1 || s[2]==s[1]+1) cout<<1;
        else cout<<2;
    }
    else if(m.size()==2){
        if(m[0]==m[1]) cout<<1;
        else if(m[1]==m[0]+1) cout<<1;
        else if(m[1]==m[0]+2) cout<<1;
        else cout<<2;
    }
    else if(p.size()==2){
        if(p[0]==p[1]) cout<<1;
        else if(p[1]==p[0]+1) cout<<1;
        else if(p[1]==p[0]+2) cout<<1;
        else cout<<2;
    }
    else if(s.size()==2){
        if(s[0]==s[1]) cout<<1;
        else if(s[1]==s[0]+1) cout<<1;
        else if(s[1]==s[0]+2) cout<<1;
        else cout<<2;
    }
    else cout<<2;

}