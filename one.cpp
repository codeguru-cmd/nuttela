#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;
    long long int ans=0,temp1=0,temp2=0;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<n;i++){
        if(i==0){
            temp1++;
            temp2++;
        }
        else if(v[i]>v[i-1]) {
            temp1++;
            temp2++;
        }
        else if(v[i]<=v[i-1]) {
            ans = max(ans,temp1);
            if(i>1 && v[i]>v[i-2]){
                temp1=temp2;
                temp2=1;
            }
            else if(i<v.size()-1 && v[i+1]>v[i-1]){
                temp1=temp2;
                temp2=0;
            }
            else if(i>1 && v[i]<v[i-2]){
                temp1=1;
                temp2=1;
            }
            else if(i<v.size()-1 && v[i+1]<v[i-1]){
                temp1=1;
                temp2=1;
            }
        }

        ans = max(ans,max(temp1,temp2));
    }
    cout<<ans<<endl;
}