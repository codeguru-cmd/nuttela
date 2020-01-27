#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> m;

        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }

        if(m['D']>m['U']) m['D']= m['U'];
        else m['U']=m['D'];

        if(m['L']>m['R']) m['L']= m['R'];
        else m['R']=m['L'];

        string ans ="";

        if(m['L']==0 && m['D']!=0){
            ans = "DU";
            m['D']=0;
            m['U']=0;
        }
        else if(m['U']==0 && m['L']!=0){
            ans = "LR";
            m['L']=0;
            m['R']=0;
        }

        while(m['L']!=0){
            ans+='L';
            m['L']--;
        }
        while(m['D']!=0){
            ans+='D';
            m['D']--;
        }
        while(m['R']!=0){
            ans+='R';
            m['R']--;
        }
        while(m['U']!=0){
            ans+='U';
            m['U']--;
        }

        cout<<ans.size()<<endl;
        cout<<ans<<endl;

    }
}