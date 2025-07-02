#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    map<int,int>m;
    for(int i=0; i<n; i++){
        cin>>v[i];
        m[abs(v[i])]++;
    }
    int ans=m.size();
    for(auto it: m){
        if(it.second>1 && it.first!=0)ans++;
    }
    cout<<ans<<endl;
}


int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}
