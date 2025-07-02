#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<long long> v(n);
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    long long ans=INT_MIN;
    for(int i=0; i<n; i++){
        ans=max({ans,sum^v[i]});
    }
    cout<<ans<<endl;
}
int main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}