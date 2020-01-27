#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
   int a;
   cin>>a;
   for(int i =0; i<a;i++){
       char string[100];
       int count[26]={0};
       cin>>string;
       int c=0;
       while(string[c] !=0){
           int x;
           if (string[c]>='a' && string[c]<='z'){
               x = string[c]-'a';
               count[x]++;
           }
           c++;
       }
       int max=0;
       int k=0;
       for(int j =0;j<26;j++){
           if(count[j]>max){
               max=count[j];
               k = j;
           }
       }
       cout<<max<<" ";
       cout<<char(97+k)<<endl;
       
   }
}