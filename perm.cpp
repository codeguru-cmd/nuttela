#include <bits/stdc++.h>

using namespace std;

int swap(vector<int> &v,int d,int i,int k){
    if(i==v[i]-1) return 0;
    int a = v[k]+d;
    int j=i;
    int p=0;
    while(j<v.size()&&v[j]!=a) j= j+d;
    if (j!=i)p=swap(v,d,i,j);
    if(j==i){
        int temp = v[j];
        v[j]= v[k];
        v[k]=temp;
        return p+1; 
    }
}

int main(){
    int t;
    cin>>t;
    vector<int> c;
    for(int i=0;i<t;i++){
        int n,d;
        cin>>n>>d;
        vector<int> v;
        int count=0;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            if(abs(i+1-p)%d!=0) count =-1;
            v.push_back(p);

        }
        int k =1;
        int l=0;
        int j=0;
        while(k!=n && count!=-1){
            if(v[j]==k) {
                count+= swap(v,d,l,j);
                k++;
                j=k-1;
                l++;
            }
            else j++;
        }
        c.push_back(count);
    }
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<endl;
    }
}