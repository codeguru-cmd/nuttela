#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,m,k;
        cin>>n>>m>>k;

        vector<int> v;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        for(int i=0;i<n-1;i++){
            if(abs(v[i]-v[i+1])<=k){
                if(v[i]>=v[i+1]){
                    if(v[i]-(v[i]-v[i+1])-k>=0) m+=abs(v[i]-v[i+1])+k;
                    else m+= v[i];
                }
                else{
                    if(v[i]-(k-v[i+1]+v[i])>=0) m+= k - abs(v[i]-v[i+1]);
                    else m+= v[i];
                }
            }
            else if(abs(v[i]-v[i+1])>k){
                if(v[i]>v[i+1]){
                    if(v[i]-k-(v[i]-v[i+1])>=0) m+= (v[i]-v[i+1]+k);
                    else m+=v[i];
                }
                else if(v[i+1]>v[i]){
                    m-= (v[i+1]-v[i]-k);
                    if(m<0) break;
                }
            }
        }
        if(m<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}