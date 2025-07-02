#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,k; cin >> n>>k;
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    long long sum=0;
    for(int i=2*k; i<n; i++){
        sum+=a[i];
    }
    long long ans=sum;
    int i = 2*k - 1;
    for(int j=n-1;j>=n-k;j--,i-=2){
        sum += (a[i] + a[i-1]);
        sum -= a[j];
        ans = max(ans,sum);
    }


    cout<<ans<<endl;
    

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) solve();
}
