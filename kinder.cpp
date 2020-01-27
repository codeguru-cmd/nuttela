#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    vector<int> v;
    for(int i=0;i<T;i++){
        int n,s,t;
        cin>>n>>s>>t;
        if(s==n || t==n){
            int max = s>t?s:t;
            int min = s<t?s:t;
            v.push_back(max-min+1);
        }
        else{
            int max = s>t?s:t;
            int min = s<t?s:t;
            if(max+min == n){
                v.push_back(max+1);
            }
            else{
                v.push_back(max-(max+min-n)+1);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}