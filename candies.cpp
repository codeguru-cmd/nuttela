#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> v;
    int s=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s+=a;
        v.push_back(s);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int start,end;
        long long c=0;
        cin>>start>>end;
        long long sum;
        if(start==1) sum = v[end-1]; 
        else sum = v[end-1]-v[start-2];
        c = sum/10;
        cout<<c<<endl;
        
    }
}