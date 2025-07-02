#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }

    for (int i = n - 1; i >= 0; i--) {
        int curr = a[i];
        m[curr]--;
        if (m[curr] == 0) {
            m.erase(curr);
        }
        // Check frequency condition before processing duplicates
        if (i < n - 1 && m.count(curr)) {
            cout << m.size() << endl;
            return;
        }
        // Process duplicates
        while (i > 0 && a[i] == a[i - 1]) {
            i--;
            m[a[i]]--;
            if (m[a[i]] == 0) {
                m.erase(a[i]);
            }
        }
        // Check order condition
        if (i > 0 && a[i - 1] > curr) {
            cout << m.size() << endl;
            return;
        }
    }
    cout << 0 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}