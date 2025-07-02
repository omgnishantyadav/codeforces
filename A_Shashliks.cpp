#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int k,a,b,x,y; cin>>k>>a>>b>>x>>y;
    if(y>x){
        swap(x,y);
        swap(a,b);
    }

    int ans=0;
    if (k >= b) {
        int cnt = (k - b) / y + 1;
        ans += cnt;
        k -= cnt * y;
    }
    if (k >= a) {
        int cnt = (k - a) / x + 1;
        ans += cnt;
        k -= cnt * x;
    }
    cout<<ans<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
