#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<v[0]<<endl;
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}