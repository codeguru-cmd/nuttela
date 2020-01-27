#include <bits/stdc++.h>

using namespace std;

int boolean(int a){
    if(a==0) return 0;
    int b = (a%10) + 2*boolean(a/10);
    return b;
}

int integer(int a){
    if(a==0) return 0;
    if(a==1) return 1;
    int s = 10*(integer(a/2)) + a%2;
    return s;
}

int main(){
    string a,b;
    cin>>a>>b;

    int n = b.length();
    
    int q = boolean(stoi(b));

    vector<int> v;
    vector<string> s1;
    int j =0;

    for(int i=0;i<=a.length()-n;i++){
        string c = a.substr(i,i+n-1);
        int p = boolean(stoi(c));

        int r = p^q;

        r = integer(r);
        string s = to_string(r);

        s1.push_back(s);

    }

    for(int i=0;i<s1.size();i++){
        int count=0;
        for(int j=0;j<s1[i].length();j++){
            if(s1[i][j]=='1')count++;
        }
        v.push_back(count);
    }

    int result =0;

    for(int i=0;i<v.size();i++){
        if(v[i]%2==0) result++; 
    }

    cout<<result;    
}