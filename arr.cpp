#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int j;
    int l=0;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if (a<min && a>0) {
            min =a;
            j =i;
        }
        if(l<0) l++;
    }
    if(n%2==0){
        for(int i=0;i<n;i++){ 
            if(v[i]>=0)v[i] = -v[i]-1;
        }
         
    }
    else if(n%2!=0 && n!=1){
        for(int i=0;i<n;i++){
            if(i!=j && v[i]>=0) v[i] = -1*v[i]-1; 
        } 
    }
    int k;
    int max = INT_MAX;
    for(int i=0;i<n;i++){
        if(v[i]<0 && v[i]<max && v[i]!= -1){
            max = v[i];
            k = i;
        }
    }
    if(n>1 && n%2!=0){
    if((v[j]+1)*(-v[k]-1)>(v[j]*-v[k])){
        v[j]= -v[j]-1;
        v[k]= -v[k]-1;
    }
    }

    if(n==1 && v[n-1]<0) v[0] = -v[0]-1;
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}