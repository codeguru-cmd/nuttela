#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<n+1;i++){
        if(arr[i-1]<i){
            for(int j =i;j<n;j++){
                if(arr[j]>arr[i-1] && arr[j]>=i){
                    int temp= arr[j];
                    arr[j]= arr[i-1];
                    arr[i-1]=temp;
                }
            }
        }
    }  
    int a=0;  
    for(int i=1;i<n+1;i++){
        if(arr[i-1]>=i){
            a++;
        }
    }
    cout<<a;


}
