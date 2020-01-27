#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> m;
    int ans=0;

    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    while(m['o']!=0 && m['n']!=0 && m['e']!=0){
        m['o']--;
        m['n']--;
        m['e']--;
        cout<<1<<" ";
    }

    while(m['z']!=0 && m['e']!=0 && m['r']!=0 && m['o']!=0){
        m['z']--;
        m['e']--;
        m['r']--;
        m['o']--;
        cout<<0<<" ";
    }

}