#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(10,0);

    string s;
    cin>>s;

    int l =0;
    int r = 9;

    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            while(l<10 && v[l]==1){
                l++;
            }
            v[l]=1;
        }
        else if(s[i]=='R'){
            while(r>-1 && v[r]==1){
                r--;
            }
            v[r]=1;
        }
        else if(s[i]>='0' && s[i]<='9'){
            v[s[i]-'0'] = 0;
            if(l>s[i]-'0') l =s[i]-'0';
            if(r<s[i]-'0') r = s[i]-'0';
        }
    }

    for(int i=0;i<10;i++) cout<<v[i];
}