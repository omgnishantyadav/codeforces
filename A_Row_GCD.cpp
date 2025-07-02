#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        ans = __gcd(ans, abs(a[i] - a[i-1]));
    }

    for (int j = 0; j < m; j++) {
        cout << __gcd(ans, a[0] + b[j])<< " ";
    }
    cout << endl;
}