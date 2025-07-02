#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    ll n; cin>>n;
    vector<ll> p;
    ll temp = n;
    int j=1;
    for(ll i=2; i<=n; i+=j){
        if(n%i==0){
            p.pb(i);
            n/=i;
            j=i;
            i=1;
        }
    }
    if(n>1) p.pb(n);
    cout<<p.size()<<endl;
    for(size_t i=0; i<p.size(); i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}