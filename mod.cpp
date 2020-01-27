#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    map<int,int> mp1;
    map<int,int> mp2;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp1[a]++;
    }

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp2[a]++;
    }

    for(int i=0;i<=m;i++){
        map<int,int> temp;
        for(auto j=mp1.begin();j!=mp1.end();j++){
            if(mp2.find((j->first+i)%m)==mp2.end()) break;
            temp[(j->first+i)%m] = j->second;
        }
        if(temp==mp2){
            cout<<i<<endl;
            break;
        }
    }

}