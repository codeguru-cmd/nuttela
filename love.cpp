#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,a,b,l,r;
    cin>>t;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>l;
        cin>>r;
        int sa=0;
        int sb=0;
        int s1=0;
        int d1 =a-l%a;
        int k1;
        if(l%a==0) k1 = l;
        else k1 = l+d1;
        int k2;
        int d2 = b - l%b;
        if(l%b==0) k2 = l;
        else k2 = l+d2;
        for(int i=k1;i<=r;i+=a) {
            sa+=i;
            v1.push_back(i);
        }
        for(int i=k2;i<=r;i+=b) {
            sb+=i;
            if(find(v1.begin(),v1.end(),i)!=v1.end()){
                s1+=i;
            }
        }


    int s =sa+sb;

    int k=0;

    if(s%3==0 || s%2==0) k++;

    if((s-s1)%2==0)k++;

    if(k==2) cout<<"TRUE LOVE";
    else if(k==1) cout<<"LOVE";
    else cout<<"FAKE LOVE";
    }
}

