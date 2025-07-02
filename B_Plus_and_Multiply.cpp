#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;

    if (a == 1) {
        if ((n - 1) % b == 0) cout << "Yes\n";
        else cout << "No\n";
        return;
    }

    long long x = 1;
    while (x <= n) {
        if ((n - x) % b == 0) {
            cout << "Yes\n";
            return;
        }
        x *= a;
    }
    cout << "No\n";
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
