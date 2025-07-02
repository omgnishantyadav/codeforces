#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans = 0;
    for (int digit = 1; digit <= 9; digit++) {
        int temp = digit;
        while (temp <= n) {
            ans++;
            temp = temp * 10 + digit;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}