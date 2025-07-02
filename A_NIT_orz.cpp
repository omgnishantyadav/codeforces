#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,z; cin>>n>>z;
    vector<long long> a(n);
    long long ans=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>a[i];
        int temp=a[i];
        
        a[i]|=z;
        z&=temp;
        ans=max(a[i],ans);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
