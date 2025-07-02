#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    set<int> prev,curr;
    int ans=0;
    prev.insert(v[0]);
    for(int i=0; i<n; i++){
        curr.insert(v[i]);
        prev.insert(v[i]);
        if(curr.size()==prev.size()){
            ans++;
            curr.clear();
        }
    }

    cout<<ans<<endl;

}
int main(){
    int t; cin>>t;
    while(t--) solve();
}