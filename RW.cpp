#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,s,k;
        cin>>n>>s>>k;
        unordered_map<int,int> mp;
        mp[-1]=0;
        for(int i=0;i<k;i++){
            int a;
            cin>>a;
            if(a>s) mp[(a-s)]++;
            else mp[(s-a)]++;
        }

        int ans=-1;
        int p=1;
        while(1){
            if(mp[0]==0) {
                ans=0;
                break;
            } 
            auto i = mp.find(p);
            if(i==mp.end())break;
            if(p==0 && mp[p]==0){
                ans =0;
                break;
            }
            else if(mp[p]<2){
                ans=p;
                break;
            }
            p++;
        }
        if(ans == -1) ans =p;
        cout<<ans<<endl;
    }
}