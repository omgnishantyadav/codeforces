#include <bits/stdc++.h>
using namespace std;
#define ll long long;


void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n),isOdd(n,0),psOdd(n,0);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2) isOdd[i]++;
    }
    psOdd[0]=isOdd[0];
    for(int i=1; i<n; i++){
        if((psOdd[i-1]+isOdd[i])%2)psOdd[i]++;
    }

    while(q--){
        int l,r,k; cin>>l>>r>>k;
        if(k%2==0){
            cout<<isOdd
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) solve();
}
