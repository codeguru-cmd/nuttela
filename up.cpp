#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<double> v1;
    double sum;
    double k;
    for(int i=0;i<n;i++){
        double a;
        cin>>a;
        int b = a;
        v1.push_back(a);
        k =a-b;
        if(i!=n-1)sum = sum + k;
        v.push_back(b);
    }

    if(sum!=k) {
        double p = (k + sum);
        for(int i=0;i<v1.size();i++){
            if(p<0){
                if(abs(v[i]-1-v1[i])<1){ v[i]+=-1;
                p++;
                }
                if(p==0) break;
            }
            if(p>0){
                if(abs(v[i]+1-v1[i])<1){ v[i]+=1;
                p--;
                }
                if(p==0) break;
            }
        }
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
}