#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        int ans =0;

        for(int i=0;i<k;){
            int count =0;
            if(s[i]=='A'){
                i++;
                while(i<k && s[i]!='A'){
                    count++;
                    i++;
                }
                ans = max(ans,count);
            }
            else i++;
        }

        cout<<ans<<endl;
    }
}