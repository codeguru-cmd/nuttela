#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,k;

    cin>>t;


    int l;
    vector<int> v1;
    for(int j=0;j<t;j++){
        vector<int> v;
        cin>>n;
        cin>>k;
        int p=0;
        int max=0;
        int o=0;
        int q=0;
        for(int i=0;i<n;i++){
            cin>>l;
            v.push_back(l);
            p=p^l;
            q++;
            if(q==k){
                if(p>max) max=p;
                p=p^v[o];
                o++;
                q--;
            }
            if(i==n-1){
                v1.push_back(max);
                break;
            }
        }
    }
    for(int i=0;i<t;i++){
        cout<<v1[i]<<endl;
    }

}