#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> v;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int msum=0;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                int sum=0;
                int prod = v[j]*v[k];
                while(prod>0){
                    sum+=prod%10;
                    prod=prod/10;
                }
                msum = max(msum,sum);
            }
        }
        cout<<msum<<endl;
    }
}