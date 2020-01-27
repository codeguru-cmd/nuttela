#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int a;
    cin>>a;
    int min,max,r,s;
    int arr[a];
    s=0;
    r=0;
    for(int i=0;i<a;i++) cin>>arr[i];
    min=arr[0];
    max=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]<=min){
            min=arr[i];
            r = i;
        }
        if(arr[i]>max){
            max=arr[i];
            s=i;
        }
    }
    int sum=0;
    if((s == 0) && (r==a-1)){
        cout<<0;
    }
    else{
    
        if(s>r){
            sum = a - r + s -2;
        }
        if(s<r){
            sum = a-r+s-1;
        }
        cout<<sum;
    }
}
