#include <bits/stdc++.h>
using namespace std;


 
void solve(){
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++) cin>>v[i];
   int ans=0;
   int temp=v[n-1];
    for(int i=n-1; i>=0; i--){
        if(v[i]>temp){
            ans++;
            temp=v[i];
        }
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