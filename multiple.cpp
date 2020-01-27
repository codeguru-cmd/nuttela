#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    vector<vector<string>> v1;
    for(int i=0;i<t;i++){
        cin>>n;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        v1.push_back({s1,s2});
    }
    int j=0;
    int s=0;
    for(int i=0;i<v1[j][0].size();i++){
        if(v1[j][0][i]==v1[j][1][i]) s++;
        else if(v1[j][1][i]=='N');
        else if(v1[j][0][i]!=v1[j][1][i]) i++;
        if(i>=v1[j][0].size()-1){
            j++;
            i=-1;
            cout<<s<<endl;
            s=0;
        }
        if(j==t) break;
    }

}