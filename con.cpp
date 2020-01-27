#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v1;
    vector<int> v2;

    int count =0;
    long long int ans=0;

    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        int m1 = INT_MAX;
        int m2 = -INT_MAX;
        bool t=false;
        while(l--){
            int a;
            cin>>a;
            m1 = min(a,m1);
            m2 = max(a,m2);
            if(a>m1) t=true;
        }
        if(t==true){
            ans+= 2*(n-count)-1;
            count++;
        }
        else {
            v1.push_back(m1);
            v2.push_back(m2);
        }
    }
    
    sort(v2.begin(),v2.end());
    sort(v1.begin(),v1.end());
    int mid =0;
    while(mid<v2.size() && v2[mid]<=v1[0]) mid++;
    ans+=v2.size()-mid;

    for(int i=1;i<v1.size();i++){
        while(mid<v2.size() && v1[i]>=v2[mid]) mid++;
        ans+=v2.size()-mid;
    }
    cout<<ans<<endl;
}