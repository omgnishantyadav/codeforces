#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a.begin(),a.end());
    int ans=0;
    
    for(int i=0; i<n-1; i++){
        if((a[i+1]-a[i])>=1) ans++;
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