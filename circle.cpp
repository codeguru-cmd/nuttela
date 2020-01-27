#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(v[n-2]+v[0]<=v[n-1]){
        int temp = v[n-1];
        v[n-1]=v[n-2];
        v[n-2]=temp;
    }
    if(v[n-3]+v[n-1]<=v[n-2]) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<endl;;
        }
    }

}