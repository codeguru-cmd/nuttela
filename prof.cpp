#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int count =0;

        for(int i=0;i<s.size();i++){
            string temp = s;
            for(int j=i;j<temp.size();j++){
                if(temp[j]=='0') temp[j]='1';
                else temp[j]='0';
                for(int k=0;k<s.size()-1;k++){
                if(temp[k]==temp[k+1]) count++;
                }
            }
        }

        cout<<count<<endl;
    }
}