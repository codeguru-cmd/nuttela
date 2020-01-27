#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    char str1[102];
    char str2[102];
    cin>>str1;
    cin>>str2;
    int a=0;
    int b=0;
    int x=0;
    for(int i =0;i<strlen(str1);i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
        if(str1[i]==str2[i]){
            x++;
        }
    }
    if(x==strlen(str1)){
        cout<<0<<endl;
    }
    else if(x!=strlen(str1)){
        for(int i=0;i<strlen(str1);i++){
            if(int(str1[i])> int(str2[i])){
                cout<<1<<endl;
                break;
            }
            else if(int(str1[i])<int(str2[i])){
                cout<<-1<<endl;
                break;
            }
        }
    }
}