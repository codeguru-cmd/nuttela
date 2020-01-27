#include <iostream>
#include <string>
#include <cstdio>
#include<cctype>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    string temp="";
    for(int i =0;i<a.length();i++){
        if(a.at(i)!='a'&& a.at(i)!='A' && a.at(i)!='e' && a.at(i)!='E' && a.at(i)!='i' && a.at(i)!='I' && a.at(i)!='o' && a.at(i)!='O' && a.at(i)!='u' && a.at(i)!='U' && a.at(i)!='y' && a.at(i)!='Y')            
            if(isupper(a.at(i))){
                a.at(i)= a.at(i)+32;
                temp = temp+"."+a.at(i);
            }
            else
            temp = temp+"."+a.at(i);
    }
    cout<<temp<<endl;
}
