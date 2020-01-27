#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;

    cin>>a;
    cin>>b;
    vector<int> v;
    vector<int> max;
    int k;
    for(int i=0;i<a;i++){
        cin>>k;
        v.push_back(k);
    }
    int s=0;
    for(int i=0;i<a;i++){
        s+=v[i];
        if(s<=b) {
            cout<<0<<" ";
            if(max.size()>0){
            int j=max.size()-1;
            while(v[i]<max[j] && j>-1){
                j--;
            }
            max.insert(max.begin()+j+1,v[i]);
            }
            else max.push_back(v[i]);
        }
        else{
            int k =s;
            int l =0;
            int p = max.size()-1;
            while(s>b){
                s-=max[p];
                p--;
                l++;
            }
            cout<<l<<" ";
            s=k;
             if(max.size()>0){
            int j=max.size()-1;
            while(v[i]<max[j] && j>-1){
                j--;
            }
            max.insert(max.begin()+j+1,v[i]);
            }
            else max.push_back(v[i]);

        }
    }
}