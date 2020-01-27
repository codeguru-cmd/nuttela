#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;
        int p1=0;
        int p2=0;
        int sum =0;

        for(int i=0;i<s.size();i++){
            if((s[i]-'0')%2==0) {
                if(s[i]!='0')p1++;
                else if(p2!=0) p1++;
            }
            
            if(s[i]=='0') p2++;
            sum+= s[i] - '0';
        }
        if(p1!=0 && p2!=0 && sum%3==0){
            cout<<"red"<<endl;
        }
        else cout<<"cyan"<<endl;

    }
}