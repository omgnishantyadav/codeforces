#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    int ans = k+k/n;
    if(ans%n==0) ans++;
    cout<<ans<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}