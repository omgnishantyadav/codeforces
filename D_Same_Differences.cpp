#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    map<int,long long> m; 
    for(int i=0; i<n; i++){
        cin >> v[i];
        m[v[i] - i]++;
    }
    long long ans = 0;
    for(auto x: m){
        long long N = x.second;
        if(N > 1) ans += (N * (N - 1)) / 2;
    }
    cout << ans << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
}
