#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

/*void solve(){
    int n; cin>>n;
    long long ans=0;

    // odd
    ans = (ans + ( ((n+1)/2)%MOD * 2%MOD ) % MOD ) % MOD;

    // even
    ans = (ans + ( ((n/2)%MOD * 3%MOD ) % MOD ) ) % MOD;

    int m = n/6;
    ans = (ans + ( ((m+1)/2)%MOD ) ) % MOD; // (n/6)->odd
    ans = (ans + ( ((m/2)%MOD * 2%MOD ) % MOD ) ) % MOD; // (n/6)->even


    cout << ans << endl;

}
*/


int main(){
    int t; cin>>t;
    while(t--)solve();
}