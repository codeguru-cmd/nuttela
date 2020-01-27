#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    unordered_map<char,int> m;
    
    for(int i=0;i<k;i++){
        char a;
        cin>>a;
        m[a]++;
    }

    long long int ans =0;
    long long int c=0;
    for(int i=0;i<s.size();i++){
        if(m.find(s[i])== m.end()){
            if(c%2==0) ans+= ((c/2)*(c+1));
            else ans+= (c*((c+1)/2));
            c=0;
        }
        else c++;
    }
    if(c!=0) {
        if(c%2==0) ans+= ((c/2)*(c+1));
        else ans+= (c*((c+1)/2));
    }
    cout<<ans<<endl;

}