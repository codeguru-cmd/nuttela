#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;
    string cur = str;
    int wc=0;
    int wb=0;

    for(int i=0;i<str.size();i++){
        if(str[i]=='W') wc++;
        else wb++;
    }

    if(wb==0 || wc==0){
        cout<<0<<endl;
        return 0;
    } 
    vector<int> v;

    if(wb%2!=0 && wc%2!=0) {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<str.size()-1;i++){
        if(str[i]=='B'){
            str[i]='W';
            v.push_back(i);
            if(str[i+1]=='W') str[i+1]='B';
            else str[i+1]='W';
        }
    }
    if(str.back()=='W'){
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]+1<<' ';
        }
        return 0;
    }

    v.clear();
    str = cur;

    for(int i=0;i<str.size()-1;i++){
        if(str[i]=='W'){
            str[i]='B';
            v.push_back(i);
            if(str[i+1]=='B') str[i+1]='W';
            else str[i+1]='B';
        }
    }
    if(str.back()=='B'){
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]+1<<' ';
        }
        return 0;
    }
}
