#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int a=0;
        for(int j=0;j<s.length();j++){
            if(s[j]=='0') a++;
        }
        vector<int>v(a,0);
        a=0;
        int k=0;
        for(int j=0;j<s.length();j++){
            if(s[i]=='1') v[k]++;
            else{
                k++;
                v[k]=v[k-1];
            }
        }
        int ans=0;
        for(int j=0;j<v.size();j++){
            if(v[j]>0){
                ans++;
                if(v[j+1]>0 && v[j+1]!=v[j] && j!=v.size()-1) ans++;
                if(v[j]*v[j]<=j+1) ans++;
                if(v[j+1]*v[j+1]<=j+1) ans++;
            }
        }
    }
}