#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =0;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a==1) count++;
    }
    
    int ans = count;
    int c=count;

    for(int i=0;i<n;i++){
        if(ans==count && v[i]==1){
            continue;
        }
        if(v[i]==1){
            ans--;
        }
        else ++ans;
        c=max(ans,c);
    }
    if(c==count) cout<<c-1<<endl;
    else cout<<c<<endl;
}