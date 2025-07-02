#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int pow_mod(int x, int n, int m) {
    if(n==0) return 1;
    long long u = pow_mod(x,n/2,m);
    u=(u*u)%m;
    if(n%2==1) u=(u*x)%m;
    return u;
}

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    int e=pow_mod(b, c, MOD-1);
    
    int ans = pow_mod(a, e, MOD);
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}