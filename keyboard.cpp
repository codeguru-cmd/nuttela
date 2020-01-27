#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;
    cin>>a;

    vector<string> v;

    string s1,s2;
    for(int i=0;i<a;i++){
        cin>>s1;
        cin>>s2;
        v.push_back(s1);
        v.push_back(s2);
    }

    int i =0;
    int k =0;
    while(i<2*a){
        int l=0;
        for(int j=0;j<v[i+1].length();j++){
            if(v[i+1].length()<v[i].length()) break;
            
            if(l!=v[i].length() && v[i][l]==v[i+1][j]){
                l++;
            }
            else if(l!=v[i].length() && v[i][l]!=v[i+1][j]){
                if(l==0){
                    break;
                }
                else if(v[i][l-1]!=v[i+1][j]){
                    l=0;
                    break;
                }
            }
            else if(l==v[i].length()){
                if(v[i][l-1]!=v[i+1][j]){
                    l=0;
                    break;
                }
            }
        }
        if(l==v[i].length()){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        i+=2;
    }

}