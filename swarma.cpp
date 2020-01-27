#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long int sx,sy;
    cin>>sx>>sy;
    vector<long long int> x(2),y(2);

    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        long long int r = a-sx;
        long long int l = b-sy;

        if(r>0) x[0]++;
        if(l<0) y[1]++;
        if(r<0) x[1]++;
        if(l>0) y[0]++;
    }

    long long int ans = max({x[0],x[1],y[0],y[1]});
    cout<<ans<<endl;

    if(ans == x[0]){
        cout<<sx+1<<' '<<sy;
    }
    else if(ans == x[1]){
        cout<<sx-1<<' '<<sy;
    }
    else if(ans == y[0]){
        cout<<sx<<' '<<sy+1;
    }
    else if(ans == y[1]){
        cout<<sx<<' '<<sy-1;
    }
}
