#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int h,w;
    cin>>h>>w;
 
    vector<int> r;
    vector<int> c;
 
    for(int i=0;i<h;i++){
        int a;
        cin>>a;
        r.push_back(a);
    }
 
    for(int i=0;i<w;i++){
        int b;
        cin>>b;
        c.push_back(b);
    }
 
    int ans[h][w];
 
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            ans[i][j]=0;
        }
    }
 
    for(int i=0;i<h;i++){
        if(r[i]==0){
            ans[i][0]=-1;
        } 
        for(int j=0;j<r[i];j++){
            ans[i][j] = 1;
        }
    }
 
    for(int i=0;i<w;i++){
        if(c[i]==0){
            ans[0][i]=-1;
        } 
        for(int j=0;j<c[i];j++){
            ans[j][i] = 1;
        }
    }
 
    int a=0;
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(ans[i][j]==0){
                if(a==0) a=1;
                if(j-r[i]>0 && i-c[j]>0) {
                    a = ((a%1000000007)*(2%1000000007))%1000000007;
                }
            }
        }
    }
 
    cout<<a<<endl;
}