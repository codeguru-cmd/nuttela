#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }

    int freq =0;
    vector<int> v;

    for(auto i=m.begin();i!=m.end();i++){
        if(i->second>freq){
            freq=i->second;
            v.clear();
            v.push_back(i->first);
        }
        else if(i->second==freq){
            v.push_back(i->first);
        } 
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}