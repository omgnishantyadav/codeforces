#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    if (a.front() == a.back()) {            
        cout << -1 << '\n';
        return;
    }

    int i = 1;
    while (i < n && a[i] == a[0]) ++i;      

    cout << i << ' ' << n - i << '\n';
    for (int k = 0; k < i; ++k)
        cout << a[k] << (k + 1 == i ? '\n' : ' ');
    for (int k = i; k < n; ++k)
        cout << a[k] << (k + 1 == n ? '\n' : ' ');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) solve();
}
