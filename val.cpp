#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n;
    cin>>q;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int> s;
    for(int i=0;i<q;i++){
        int t;
        cin>>t;
        s.push_back(t);
    }
    vector<int> r;
    int k=0;
    int i=0;
    for(;i<s[k];i++){
        if(i==s[k]-1){
            r.push_back(v[0]);
            r.push_back(v[1]);
            k++;
        }
        if(v[0]>v[1]) {
            v.push_back(v[1]);
            v.erase(v.begin()+1);
        }
        else{
            v.push_back(v[0]);
            v.erase(v.begin());
        }
    }
    for(int i=0;i<r.size();i=i+2){
        cout<<r[i]<<" "<<r[i+1]<<endl;
    }
}