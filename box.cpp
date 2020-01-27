#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int k;
        cin>>k;

        int p;
        cin>>p;

        vector<int> v;
        int m1=-INT_MAX,m2=INT_MAX;
        int z,x;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            if(v[i]>m1 || (v[i]==m1 && i==n-1) || (v[i]==m1 && v[i+1]==m1)){
                m1=v[i];
                z=i;
            }
            if(v[i]<m2 || (v[i]==m2 && i==n-1) || (v[i]==m2 && v[i+1]==m2)){
                m2=v[i];
                x=i;
            }
        }

        int ans;
        if(p==0){
            if(k%2==0){
                if(z==0) ans = v[z+1];
                else if(z==n-1) ans = v[z-1];
                else ans = min(v[z-1],v[z+1]);
            }
            else ans = m1;
        }
        else if(p==1){
            if(k%2==0){
                if(x==0) ans = v[x+1];
                else if(x==n-1) ans = v[x-1];
                else ans = max(v[x-1],v[x+1]);
            }
            else ans = m2;
        }

        cout<<ans<<endl;
    }
}