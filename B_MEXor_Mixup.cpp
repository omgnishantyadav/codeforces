#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b; cin>>a>>b;
    long long ans=a-1;
    long long xOR=0;
    for(int i=0; i<=a-1; i++){
        xOR^=i;
    }
    if(xOR==b) cout<<a;
    else if(b!=a)cout<<a+1;
    else cout<<a+2;
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
