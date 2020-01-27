#include <bits/stdc++.h>
using namespace std;

int ans=INT_MAX;

void fun(int c,vector<vector<int>> v,int n,int i,int j){
	
    if(v[i-1][j-1]==n){
        ans = min(c,ans);
        return;
    }
    else if(v[i-1][j-1]>ans) return;

    fun(c+1,v,n,i+1,j);

    fun(c+1,v,n,i,j+1);
}

int main(){
	int n;
  cin>>n;
  
  vector<vector<int>> v(1000000);
  
  for(int i=1;i<=1000000;i++){
  	for(int j=1;j<=1000000;j++){
  		v[i-1].push_back(i*j);
  }	
  }
  
  fun(0,v,n,1,1);
  
  cout<<ans;
}