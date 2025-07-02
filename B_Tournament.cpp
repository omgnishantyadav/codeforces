#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);
    int maxm=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        maxm=max(maxm,a[i]);
    }
    if(k>=2 || (k==1 && a[j-1]==maxm)) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}