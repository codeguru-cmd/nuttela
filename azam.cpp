#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        vector<int> dp(27,0);
        dp[0]=0;

        string s = s1;
        sort(s.begin(),s.end());

        for(int i=0;i<s.size();i++){
            char a = tolower(s[i]);
            for(int j=a-'a'+1;j<=26;j++){
                dp[j]++;
            }
        }

        int i=0;
        int count =0;
        int c =0;

        while(i<s1.size() && i<s2.size()){
            if(s1[i]==s2[i]) c++;
            if(s1[i]<s2[i]){
                count =1;
                break;
            }
            else if(s1[i]>=s2[i]){
                if(dp[tolower(s2[i])-'a']>0){
                    int j =i;
                    for(;i<s1.size();i++){
                        if(s1[i]<s2[j]) {
                            count =1;
                            swap(s1[j],s1[i]);
                            break;
                        }
                    }
                    break;
                }
            }
            for(int k=i;k<=26;k++){
                dp[tolower(s1[k])-'a'+1]--;
            }
            i++;
        }

        if(count==1) cout<<s1<<endl;
        else if(c==s1.size() && s2.size()>c) cout<<s1<<endl;
        else cout<<"---"<<endl;
    }
}