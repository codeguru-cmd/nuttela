#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> v;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int m=0;
        for(int j=v.size()-1;j>=0;j--){
            if(v[j]<=m && v[j]+1<=n){ 
                m = v[j];
                break;
            }
            m = v[j];
        }
        if(n<3 || m+1>n) cout<<0<<endl;
        else cout<<m-1<<endl;
    }
}