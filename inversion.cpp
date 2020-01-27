#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector<int> v;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        
        long long int count =0;
        long long int c =0;
        long long int ans =0;

        for(int i=0;i<n;i++){
            int l=0;
            int r=0;
            for(int j=i+1;j<n;j++){
                if(v[i]>v[j]) r++;
            }
            for(int j=0;j<i;j++){
                if(v[i]>v[j]) l++;
            }
            
            c+=r;
            count+= 2*r + l;
        }
        count-=c;

        if(k%2==0) ans+= count*(k/2*(k-1)) + k*c;
        else ans+= count*(k*(k-1)/2) + k*c;

        cout<<ans<<endl;
    }
}