#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,a,b; cin>>n>>a>>b;
    if(a==b && b==n ) cout<<"Yes";
    else if(n-a-b>=2) cout<<"Yes";
    else cout<<"No";
    cout<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
