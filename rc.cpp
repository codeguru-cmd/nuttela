#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> makerow(int r,int c){
    
    vector<vector<int>> v;
    vector<int> row;
    vector<int> col;

    int a = r+c;
    int flag =0;

    for(int i=0;i<r;i++){ 
        if(flag==0){
            row.push_back(a);
            flag=1;
            a=a-3;
        }
        else{
            row.push_back(a);
            flag=0;
            a--;
        }
    }
    
    a=r+c-1;
    flag=0;
    int m = row.back();

    for(int i=0;i<c;i++){
        if(a<m){
            col.push_back(a);
            a--;
            continue;
        }
        if(flag==0){
            col.push_back(a);
            flag=1;
            a--;
        }
        else{
            col.push_back(a);
            flag=0;
            a=a-3;
            if(a<m) a=m-1;
        }
    }

    v.push_back(row);
    v.push_back(col);

    return v;
}


int main(){
    int r,c;
    cin>>r>>c;

    vector<vector<int>> v(r);
    vector<int> row;
    vector<int> col;

    if(r==1 && c==1){
        cout<<0<<endl;
        return 0;
    }

    if(r==1){
        for(int i=0;i<c;i++){
            cout<<(i+2)<<' ';
        }
        return 0;
    }

    if(c==1){
        for(int i=0;i<r;i++){
            cout<<i+2<<endl;
        }
        return 0;
    }

    if(r>c){
        v = makerow(c,r);
        col = v[0];
        row = v[1];
    }
    else{
        v = makerow(r,c);
        col = v[1];
        row = v[0];
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<row[i]*col[j]<<' ';
        }
        cout<<endl;
    }
}