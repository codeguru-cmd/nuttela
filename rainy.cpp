#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    int i = 0;

    while(i<n){
        bool rain = true;
        int j = i-x;
        if(j<0) j=0;
        for(;j<i;j++){
            if(v[j]<v[i]) {
                rain = false;
                break;
            }
        }
        if(rain){
            int j = i+1;
            while(j<=i+y && j<v.size()){
                if(v[j]<v[i]){
                    rain = false;
                    break;
                }
                j++;
            }
        }
        if(rain){
            cout<<i+1;
            break;
        }
        i++;
    }
}