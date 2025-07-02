#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n; cin>>n;
    vector<ll> v(n),ps(n),ss(n);
    for(int i=0; i<n; i++){
        
        cin>>v[i];
        if(i>0)ps[i]=ps[i-1]+v[i];
        else{
            ps[i]=v[i];
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}