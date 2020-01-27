#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        
        string s;
        cin>>s;

        vector<int> v;

        for(int i=0;i<s.size();){
            string temp = "";
            temp+=s[i];

            if(s[i]=='o'){
                i++;
                if(s[i]=='n'){
                    i++;
                    if(s[i]=='e'){
                        v.push_back(i);
                        i++;
                    }
                }
            }
            else if(s[i]=='t'){
                i++;
                if(s[i]=='w'){
                    i++;
                    if(s[i]=='o'){
                        v.push_back(i);
                        i++;
                    }
                }
            }
            else i++;
        }

        cout<<v.size()<<endl;
        
        for(int i=0;i<v.size();i++){
            cout<<v[i]+1<<" ";
        }

        cout<<endl;
    }
}