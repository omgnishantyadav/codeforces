#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,x,y; cin>>a>>x>>y;
    if(a<min(x,y) || a>max(x,y)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}