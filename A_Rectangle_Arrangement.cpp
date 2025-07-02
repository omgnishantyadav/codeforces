#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int l=0;
    int b=0;
    while(n--){
        int x;int y;
        cin>>x>>y;
        l=max(l,x);
        b=max(y,b);
    }
    cout<<2*l+2*b<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}