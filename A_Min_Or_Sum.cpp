#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        ans|=v[i];
    }
    cout<<ans<<endl;
    
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}