#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s; cin>>n>>s;
    vector<int> x(n);
    int low=INT_MAX;
    int high=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>x[i];
        low=min(low,x[i]);
        high=max(high,x[i]);
    }

    cout<<min(abs(high-s),abs(low-s))+high-low<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}