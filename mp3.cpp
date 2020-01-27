#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    vector<int> v;
    unordered_map<int,int> map;
    double count=0;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(map.find(a)==map.end()){
            count++;
        }
        map[a]++;
    }
    priority_queue<int,vector<int>,greater<int>> q;

    if(ceil(log(count)/log(2))*n<=l*8) cout<<0;
    else{
        for(auto i =map.begin();i!=map.end();i++){
            q.push(i->second);
        }
        int g=0;
        while(ceil(log(count)/log(2))*n>l*8){
            int v = q.top();
            q.pop();
            g+=v;
            count--;

        }
        cout<<g;
    }

}