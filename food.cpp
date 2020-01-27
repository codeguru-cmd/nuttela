#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> v1;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        int max1=0;
        int max2 = 0;
        vector<int> v2;
        vector<int> v3;

        for(int j=0;j<n;j++){
            int d,v;
            cin>>d;
            cin>>v;
            int k=v2.size()-1;
            if(find(v3.begin(),v3.end(),d) != v3.end()){
                if(v2[distance(v3.begin(),find(v3.begin(),v3.end(),d))]<v){
                    if(v2[distance(v3.begin(),find(v3.begin(),v3.end(),d))]==max1){
                        max1 = v;
                        v2.erase(v2.begin()+distance(v3.begin(),find(v3.begin(),v3.end(),d)));
                        v3.erase(v3.begin()+distance(v3.begin(),find(v3.begin(),v3.end(),d)));
                        v2.push_back(v);
                        v3.push_back(d);
                    }
                    else if(v2[distance(v3.begin(),find(v3.begin(),v3.end(),d))]==max2){
                        if(v!=max1){ 
                        max2=v;
                        v2.erase(v2.begin()+distance(v3.begin(),find(v3.begin(),v3.end(),d)));
                        v3.erase(v3.begin()+distance(v3.begin(),find(v3.begin(),v3.end(),d)));
                        v2.push_back(v);
                        v3.push_back(d);
                        }
                    }
                    else{
                        v2.erase(v2.begin()+distance(v3.begin(),find(v3.begin(),v3.end(),d)));
                        v3.erase(v3.begin()+distance(v3.begin(),find(v3.begin(),v3.end(),d)));
                        v2.push_back(v);
                        v3.push_back(d);
                    }
                
                    
                }
            }
            else {
                v2.push_back(v);
                v3.push_back(d);
                if(v>max1){
                        int temp = max1;
                        max1 = v;
                        max2 = temp;
                    }
                else if(v>max2 && v!=max1){
                        max2=v;
                    }
            }
            
        }
        v1.push_back(max1+max2);
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }
    
}