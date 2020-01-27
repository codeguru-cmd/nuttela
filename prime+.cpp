#include <bits/stdc++.h>

using namespace std;

int isPrime(int n) {
        if (n < 2) return 0;
        int upperLimit = (int)(sqrt(n));
        for (int i = 2; i <= upperLimit; i++) {
            if (i < n && n % i == 0) return 0;
        }
        return 1;
    }



int main() {   
    int A=16777214;
    vector<int> v;
    vector<int> v1;
    for(int i=2;i<=A;i++){
        int p = isPrime(i);
        if(p==1) v.push_back(i);
        
    }
        for(int i=0;i<v.size();i++){
        int s = A - v[i];
        if(isPrime(s)==1){
            v1.push_back(v[i]);
            v1.push_back(s);
        }   
            
}    
cout<<v1[0]<<" ";
cout<<v1[1];

}