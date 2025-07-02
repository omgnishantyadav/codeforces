#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int modPow(int a, int b, int m) {
    if (b == 0) return 1;
    long long u = modPow(a, b / 2, m);
    u = (u * u) % m;
    if (b % 2 == 1) {
        u = (u * a) % m;
    }
    return u;
}

void solve() {
    long long a, b;
    cin >> a >> b;
    cout << modPow(a, b, MOD) << '\n';
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