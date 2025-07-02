#include <bits/stdc++.h>
using namespace std;


void solve() {
    int l,r,x; cin>>l>>r>>x;

    int ans = r / x + r % x;
    int m = r / x * x - 1;
    if(m >= l)ans = max(ans, m / x + m % x);
    cout << ans<<endl ;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) solve();
}
