#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int x, k;
    cin >> x >> k;
    
    if(k==2 && x==1){
        cout << "YES\n";
        return;
    }


    if (k == 1) {
        if (isPrime(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}