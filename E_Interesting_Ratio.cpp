#include <bits/stdc++.h>
using namespace std;

vector<int> prime(int n) {
    vector<int> num(n + 1, 0);
    vector<int> p;
    for (int i = 2; i <= n; i++) {
        if (num[i] == 0) {
            p.push_back(i);
            for (int j = i; j <= n; j += i) {
                num[j] = -1;
            }
        }
    }
    return p;
}

int fun(int i, const vector<int>& p, int n) {
    int val = n / i;
    int cnt = upper_bound(p.begin(), p.end(), val) - p.begin();
    return cnt;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> p = prime(n);

        long long ans = 0;
        for (int i = 1; i <= n / 2; i++) {
            ans += fun(i, p, n);
        }
        cout << ans << endl;
    }
}
