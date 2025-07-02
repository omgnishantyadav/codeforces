#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int MAXN = 2*1e6+1;

vector<long long> fact(MAXN), invFact(MAXN);

long long power(long long x, long long n) {
    long long res = 1;
    while(n) {
        if(n & 1) res = res * x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for(int i = 1; i < MAXN; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }
    invFact[MAXN-1] = power(fact[MAXN-1], MOD-2);
    for(int i = MAXN-2; i >= 0; i--) {
        invFact[i] = invFact[i+1] * (i+1) % MOD;
    }
}

long long nCr(int n, int r) {
    if(r < 0 || r > n) return 0;
    return (((fact[n] * invFact[r]) % MOD) * invFact[n - r]) % MOD;
}

int main() {
    precompute();
    int r,n; cin>>r>>n;

    cout<<nCr(n+r-1,r-1);
}