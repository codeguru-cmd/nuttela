#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int m=0;
    int l;
    int k;
    int j;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a>m){
            m=a;
            j = i;
            l=i-1;
            k=i+1;
        }
    }
    while(l>=0 || k<=v.size()-1){
        if(k!=v.size() && v[k]==v[j]-1){
            v[j]=v[k];
            k++;
        }
        else if(l!=-1 && v[l]==v[j]-1){
            v[j]=v[l];
            l--;
        }
        else break;

    }
    if(l!=-1 || k!=v.size()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
}