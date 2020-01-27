#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    vector<int> v1(s.length(),0);
    vector<int> v2(s.length(),0);
    int j=0;
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='v'){
            v1[j]++;
            sum++;
        }
        else if(s[i]=='o'){
            while(s[i]=='o' && i<s.length()){
            v2[j]++;
            i++;
        }
            i--;
            j++;
        }
    }
    

    int a=0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==0) break;
        for(int j=i;j<v2.size();j++){
            if(v2[j]==0) break;
            for(int k=j+1;k<v2.size();k++){
                if(v1[k]==0) break;
                if(v1[i]!=0 && v1[k]!=0)a+=(v1[i]-1)*(v2[j])*(v1[k]-1);
            }
        }
    }
   cout<<a;
}  