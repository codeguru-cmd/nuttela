#include <bits/stdc++.h>
using namespace std;


int hcf(long long int a,long long int b){
    if(b<a){
        long long int temp =a;
        a=b;
        b=temp;
    }
    if(a==0)return b;
    if(a==1) return 1;

    return hcf(b%a,a);

}

int main(){
    
    int n;
    cin>>n;
    int c=0;
    vector<long long int> ans;
    vector<long long int> temp;

    for(int i=0;i<n;i++){
        vector<long long int> v;
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            v.push_back(k);
        }
        long long int a =v[0];

        for(int j=1;j<n;j++){
            a = hcf(a,v[j]);
        }

        ans.push_back(a);
        temp=v;
    }

    for(int i=0;i<n-1;i++){
        if((ans[i]*ans[n-1])!=temp[i]){
            if(ans[i]*ans[n-1])
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}