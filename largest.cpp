

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
 vector<int> B{8,89};
    
    string a;
    string b;
    int q =0;
    for(int i=0;i<B.size()-1;i++){
        int max=B[i];
        for(int j=i+1;j<B.size();j++){
            a = to_string(B[j]);
            b = to_string(B[i]);
            while(q != -1){
                if(a.length()<b.length()){
                    if(a[q]>b[q]){
                        int temp = B[j];
                        B[j]=B[i];
                        B[i]= temp;
                        q=-1;
                    }else if(a[q]==b[q]) q++;
                    else q=-1;
                    if(q==a.length()) q=0;
                }
                else if(b.length()<a.length()){
                    if(a[q]>b[q]){
                        int temp = B[j];
                        B[j]=B[i];
                        B[i]= temp;
                        q=-1;
                    }else if(a[q]==b[q]) q++;
                    else q=-1;
                    if(q==b.length()) q=0;
                }
                else if(a==b) q=-1;
            }       
            }
    }
    for(int i =0;i<B.size();i++){
        cout<<B[i];
    }
}
    
