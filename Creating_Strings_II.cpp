#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int MAXN = 1e6+1;

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

int main(){
    string s; cin>>s;
    precompute();
    int n=s.size();
    map<char,int> m;
    for(int i=0; i<n; i++){
        m[s[i]]++;
    }

    long long ans=fact[n];
    for(auto it: m){
        ans = (ans*invFact[it.second])%MOD;
    }
    cout<<ans<<endl;
}