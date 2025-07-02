#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l,r; cin>>l>>r;
    int ans=1;
    int k=r-l;
    while(k>=ans){
        k-=ans;
        ans++;
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}