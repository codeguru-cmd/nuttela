#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    int s1=v[0];

    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<n;i++){
        if(v[0]>=2*v[i]) {
            s1+=v[i];
            ans.push_back(i+1);
        }
        if(s1>sum/2) break;
    }

    if(s1>sum/2){
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    else cout<<0;


}