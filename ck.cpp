#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        string str="";
        char a = s[0];
        str = str+a;
        int count =1;

        for(int i=1;i<s.size();i++){
            if(s[i]== a){
                count++;
                if(i==s.size()-1){
                    str+= to_string(count);
                    count =0;
                }
                
            }
            else{
                str += to_string(count);
                a=s[i];
                str+=a;
                count =1;
            }
        }

        if(count!=0){
            str+= to_string(count);
        }

        if(str.size()<s.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}