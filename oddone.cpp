#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        map<int,int,greater<int>> m;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2==0) m[a]++;
        }
        int ans =0;

        while(!m.empty()){
            auto i = m.begin();
            int k = i->first/2;
            ans++;
            if(k%2==0) {
                m[k]+=i->second;
            }
            m.erase(i->first);
        }

        cout<<ans<<endl;
    }

}