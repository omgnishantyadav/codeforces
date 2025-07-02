#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n,j,k; cin>>n>>j>>k;
    set<int, greater<int>> s;
    for(int i=0; i<n; i++){
        int t; cin>>t;
        s.insert(t);
    }

    int cnt=0;
    string ans="NO";
    for(auto it : s){
        if(it==j) ans="YES";
        cnt++;
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
} 