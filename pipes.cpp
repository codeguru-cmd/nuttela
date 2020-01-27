#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        int n;
        cin>>n;

        vector<vector<int>> v;

        for(int i=0;i<2;i++){
            string a;
            cin>>a;
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back((a[j])-'0');
            }
            v.push_back(temp);
        }
        int dir =0;
        int i=0;
        int j=0;

        while(i<2 && j<v[0].size()){
            if(dir==0){
                if(v[i][j]==1 || v[i][j]==2) j++;
                else if(v[i][j]==3 || v[i][j]==4 || v[i][j]==5 || v[i][j]==6){
                    if(i==0) {
                        dir =1;
                        i = 1;
                    }
                    else{
                        dir =2;
                        i=0;
                    }
                }
            }
            else if(dir==1){
                if(v[i][j]==1 || v[i][j]==2) {
                    cout<<"NO"<<endl;
                    return 0;
                }
                else if(v[i][j]==3 || v[i][j]==4 || v[i][j]==5 || v[i][j]==6){
                    if(i==1) {
                        dir =0;
                        i = 1;
                        j++;
                    }
                }
            }
            else if(dir==2){
                if(v[i][j]==1 || v[i][j]==2) {
                    cout<<"NO"<<endl;
                    return 0;
                }
                else if(v[i][j]==3 || v[i][j]==4 || v[i][j]==5 || v[i][j]==6){
                    if(i==0) {
                        dir =0;
                        i = 0;
                        j++;
                    }
                }
            }
        }
        if(i==1 && j==v[0].size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}