#include <bits/stdc++.h>

using namespace std;

void bub(vector<int> &v){
    for(int i=1;i<v.size()-2;i++){
        for(int j=0;j<v.size()-i-1;j=j++){
            if(v[j]>v[j+2]) swap(&v[j],&v[j+2]);
        }
    }
    return;
}




int main(){
    int a;
    vector<int> v;
    int b;
    for(int i=0;i<a;i++){
        cin>>b;
        v.push_back(b);
    }
    bub(v);

    int c=0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]) {
            cout<<i;
            break;
        }
        else c++;
    }
    if(c==v.size()-2) cout<<"OK";
}