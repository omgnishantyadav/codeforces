#include <bits/stdc++.h>
using namespace std;

//2sum problem = 2*s/n

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long s=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }

    if((2*s)%n!=0){
        cout<<0<<endl;
        return;
    }

    long long target=(2*s)/n;


    long long ans=0;
    map<long long, int> m;
    for(int i=0; i<n; i++){
        ans+=m[target-a[i]];
        m[a[i]]++;
    }
    cout<<ans<<endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) solve();
}
