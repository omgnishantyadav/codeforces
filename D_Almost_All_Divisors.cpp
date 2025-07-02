#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    int big=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>v[i];
        
    }
    sort(v.begin(),v.end());
    int x=v[0]*v[n-1];
    
}

int main() {
    int t; cin>>t;
    while(t--) solve();

}