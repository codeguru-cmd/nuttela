#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,p,k;
        cin>>n>>p>>k;
        priority_queue<int,vector<int>,greater<int>> pq;
        int count =0;

        while(n--){
            int a;
            cin>>a;
            pq.push(a);
        }
        
        if(pq.size()<k){
            while(p-pq.top()>=0 && !pq.empty()){
                p-=pq.top();
                pq.pop();
                count++;
            }
        }
        else{
            int m =0;
            int c =p;
            vector<int> v;
            vector<int> perm;
            while(!pq.empty() && c-pq.top()>=0){
                m++;
                perm.push_back(pq.top());
                v.push_back(pq.top());
                if(m==k) {
                    count+=m;
                    c -= v[k-1];
                    m=0;
                    v.clear();
                }
                pq.pop();
            }
            while(perm.size()>0 && !pq.empty() && c+perm[perm.size()-1]-pq.top()-perm[perm.size()-k]>=0){
                count++;
                c = c+perm[perm.size()-1]-pq.top()-perm[perm.size()-k];
                 perm.push_back(pq.top());
                pq.pop();
            }
            int i=0;
            if(v.size()>0){
                while(i<v.size() && c-v[i]>=0){
                    count++;
                    c-=v[i];
                    i++;
                }
            }
        }
        cout<<count<<endl;
        }
    }
