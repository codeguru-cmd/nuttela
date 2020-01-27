#include <bits/stdc++.h>

using namespace std;

unsigned long long int sp(vector<long long> temp,int j,unsigned long long int s){
    
    if(j==temp.size()-1){
        s+=(j+1)*temp[j];
        return s;
    }
    if(j==temp.size()){
        return s;
    }

    while(j!=temp.size()-1 && temp[j]<temp[j+1]){
        s+=(j+1)*temp[j];
        j++;
    }
    unsigned long long int msum1=sp(temp,j+1,s+(j+1)*temp[j]);
    unsigned long long int msum2;

    if(j!=temp.size()-1){
    long long l = temp[j];
        temp[j]=temp[j+1];
        temp[j+1]=l;
        msum2 =sp(temp,j+2,s+(j+1)*temp[j]+(j+2)*temp[j+1]);
    }
    return max(msum1,msum2);
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<long long> v;
        unsigned long long int msum=0;

        for(int j=0;j<n;j++){
            long long a;
            cin>>a;
            v.push_back(a);
        }
        unsigned long long int s=0;
        msum =sp(v,0,s);

        cout<<msum<<endl;
    }

}