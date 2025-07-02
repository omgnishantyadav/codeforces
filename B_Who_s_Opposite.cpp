#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d; cin>>a>>b>>c;
    
    int A=min(a,b);
    int B=max(a,b); 
    
    if(c>B+B%2 || B-A-1) d=-1;
    cout<<d<<endl;
     
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}