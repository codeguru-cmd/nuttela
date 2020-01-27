#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> h1;
    vector<int> h2;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        h1.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        h2.push_back(a);
    }

    int s1,s2;

    vector<int> c1;
    vector<int> c2;
    for(int i=0;i<n;i=i+2){
        s1+=h1[i]+h2[i+1];
        c1.push_back(h1[i]);
        c1.push_back(h2[i+1]);
        s2+=h2[i]+h1[i+1];
        c2.push_back(h2[i]);
        c2.push_back(h1[i+1]);
    }
    int sum=0;
    if(s1>s2){
        for(int i=0;i<n;i++){
            if(i==0 && c2[i]>c1[i+1]+c1[i]){
                sum+=c2[i];
                i++;
            }
            else if(i==n-2 && c2[i]>c1[i-1]+c1[i]+c2[i+1]){
                sum += c2[i];
                sum+= c2[i+1];
            }
            else if(i==n-1 && c2[i]>c1[i-1]+c1[i]){
                sum+=c2[i]-c1[i-1];
            }
            else if(c2[i]>c1[i-1]+c1[i]+c2[i+1]){
                sum += (c2[i]-c1[i-1]);
                i++;
            }
            
            else{
                sum+=c1[i];
            } 
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(i==0 && c1[i]>c2[i+1]+c2[i]){
                sum+=c1[i];
                i++;
            }
            else if(i==n-2 && c1[i]>c2[i-1]+c2[i]+c1[i+1]){
                sum += c1[i];
                sum+= c1[i+1];
            }
            else if(i==n-1 && c1[i]>c2[i-1]+c2[i]){
                sum+=c1[i]-c2[i-1];
            }
            else if(c1[i]>c2[i-1]+c2[i]+c1[i+1]){
                sum += (c1[i]-c2[i-1]);
                i++;
            }
            else{
                sum+=c2[i];
            } 
        }
    }
    cout<<sum;
}