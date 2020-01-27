#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long long> v;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int odd=0;
        long long sum=0;
        for(int j=0;j<n;j++){
            long long a;
            cin>>a;
            sum+=a;
            if(a%2!=0) odd++;
        }
        for(int j=0;j<n;j++){
            long long b;
            cin>>b;
            sum+=b;
            if(b%2!=0)odd--;
        }
        if(odd!=0){
            sum= sum - abs(odd);
        }
        v.push_back(sum);
    }
    for(int i=0;i<v.size();i++){
        long long k = (v[i]/2);
        cout<<k<<endl;
    }
}