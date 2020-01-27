#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    queue<int> q;
    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(m.find(a)==m.end()){
            q.push(a);
            m[a]++;
        }
        else continue;
        if(q.size()>k){
            int a= q.front();
            q.pop();
            m.erase(a);
        }
        
    }

    cout<<q.size()<<endl;
    vector<int> v;

    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }

    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }

}