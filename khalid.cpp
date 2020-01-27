#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<int> v;
        priority_queue<int> q;
        int k=0;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }

        while(q.empty()==false){
            int c =1;
            int p;
            while(c<n/4){
                p = q.top();
                if(v.size()!=0 &&p==v[v.size()-1]){
                k=1;
                cout<<-1<<endl;
                break;
            }
                q.pop();
                c++;
            }
            if(k==1) break;
            p = q.top();
            if(v.size()!=0 && p==v[v.size()-1]){
                k=1;
                cout<<-1;
                break;
            }
            v.push_back(p);
            q.pop();
        }

        if(k==0){
            for(int i=2;i>=0;i--){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
}