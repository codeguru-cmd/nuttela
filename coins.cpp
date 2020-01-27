#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int sum=0;
    int s[101];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j]<s[j+1]){
                swap(s[j],s[j+1]);
        }
        }
    }
    for(int i=0;i<n;i++){
        sum+=s[i];
    }
    int mid = sum/2;
    int a =0;
    int k =0;
        while(a<=mid){
            a+=s[k];
            k++;
    }
    cout<<k<<endl;
        
}