#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s;
    string s1="";
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i=i+2)
        s1 += s[i];
    for(int i =0; i<s1.length()-1;i++){
        int min=i;
        for(int k=i+1;k<s1.length();k++){
            if(s1[k]-'0'<s1[min]-'0')
                min = k;
            
        }
        swap(s1[i],s1[min]);
    }
    for(int i=0;i<s1.length()-1;i++){
        cout<<s1[i]<<"+";
    }
    cout<<s1[s1.length()-1]<<endl;
}