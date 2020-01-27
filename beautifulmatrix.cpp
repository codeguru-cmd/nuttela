#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int a[5][5];
    int s1;
    int s2;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[j][i];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){    
            if(a[j][i]==1){
                s1 = abs(2-j);
                s2 = abs(2-i);
            }
        }
    }
    cout<<s1;
    cout<<(s1+s2);
}
