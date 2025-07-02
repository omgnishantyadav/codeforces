#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;

void solve() {
    ll n;
    cin >> n;
    ll temp = ((n%MOD)*((n+1)%MOD))%MOD;
    ll ans  = ( (temp%MOD) * ((4*n-1)%MOD)) % MOD;
     
    cout <<(337*ans) % MOD<< endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}