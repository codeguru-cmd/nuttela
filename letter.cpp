#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<char,int> map;
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    vector<vector<int>> v;
    for(int i=0;i<s.length();i++){
        v
    }
    for(int i=0;i<k;i++){
        string temp = s;
        string s1;
        cin>>s1;
        int l=0;
        int count=0;
        int r=0;
        for(int j=0;j<s1.length();j++){
            while(s1[j]!=temp[l]) l++;
            count = max(count,l);
            temp[l]='.';
            while(temp[r]=='.' && r!=temp.size()-1){
                r++;
            }
            l=r;
        }
        
        v.push_back(count+1);
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
}