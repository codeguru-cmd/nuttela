#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            m[a]++;
        }

        int count =0;
        for(int i=0;i<n;i++){
            if(v[i]==m.begin()->first){
                if(i!=0 && v[i-1]!=m.begin()->first){
                    v[i]=m.begin()->first;
                    count++;
                }
                if(i!=n-1 && v[i+1]!=m.begin()->first){
                    v[i]=m.begin()->first;
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }
}