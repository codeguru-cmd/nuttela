#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> v;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        
        string s;
        cin>>s;

        int k=v[0];
        int c = 1;

        for(int i=0;i<s.length();i++){
            if(s[i]=='>'){
                if(v[i+1]==-1) v[i+1]=k-1;
                if(k>v[i+1] && v[i+1]>0) k = v[i+1];
                else if(v[i+1]>=k){
                    c=0;
                    break;
                }
            }
            else if(s[i]=='<'){
                if(v[i+1]==-1) v[i+1]=k+1;
                if(v[i+1]>k) k = v[i+1];
                else if(v[i+1]>=k){
                    c=0;
                    break;
                }
            }
            else if(s[i]=='='){
                if(v[i+1]==-1) v[i+1]=k;
                if(v[i+1]==k) k = v[i+1];
                else if(v[i+1]<k || v[i+1]>k){
                    c=0;
                    break;
                }
            }
        }
        if(c==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}