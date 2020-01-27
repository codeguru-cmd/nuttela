#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int a = ceil(n/2);

    vector<int> v;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        v.push_back(b);
    }

    sort(v.begin(),v.end());

    float l = 0;
    int sum =0;

    for(int i=0;i<n;i++){
        if(i==n-1 && v[i]==v[i-1]){
            sum++;
            int t = sum%2;
            l+=t;
            if(t==1) sum--;
        }
        else if(i==n-1 && v[i]!=v[i-1]){
            l++;
        }
        else if(v[i]==v[i+1]){
            sum++;
        }
        else{
            sum++;
            int t= sum%2;
            l+=t;
            if(t==1) sum--;

        }
    }

    cout<<(sum +ceil(l/2));   
}