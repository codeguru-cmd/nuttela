#include <bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    int t;

    for(int i=l;i<=r;i++){
        t =1;
        unordered_map<char,int> m;
        string s = to_string(i);
        for(int j=0;j<s.length();j++){
            if(m.find(s[j])!=m.end()){
                t =0;
                break;
            }
            m[s[j]]++;
        }
        if(t==1){ cout<<i<<endl;
            break;
        }
    }
    if(t==0) cout<<-1<<endl;
    
}