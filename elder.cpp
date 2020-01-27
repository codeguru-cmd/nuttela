#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){
        vector<vector<int>> v;

        for(int i=0;i<3;i++){
            int a;
            cin>>a;
            v.push_back({a});
        }
        

        for(int i=0;i<3;i++){
            int a;
            cin>>a;
            v[i].push_back(a);
        }

        sort(v.begin(),v.end());
        int t =0;

        for(int i=1;i<3;i++){
            
            if(v[i][0]==v[i-1][0] && v[i][1]!=v[i-1][1]){
                t=1;
                break;
            }
            else if(v[i][1]<v[i-1][1]){
                t=1;
                break;
            }
        }

        if(t==1) cout<<"NOT FAIR"<<endl;
        else cout<<"FAIR"<<endl;


    }
}