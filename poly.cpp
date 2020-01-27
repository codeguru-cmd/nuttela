#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a;
        cin>>a;
        int ans =0;

        string str = to_string(a);

        int l = str.size();

        int k = str[0]-'0';

        ans+= 9*(l-1);
        int count =0;
        char c = str[0];

        for(int i=1;i<str.size();i++){
            if(str[i]==c) continue;
            else if(str[i]>c) break;
            else{
                count =1;
                break;
            }
        }
        if(count==0){
            ans+=k;
        }
        else{
            ans+=(k-1);
        }

        cout<<ans<<endl;
}
}