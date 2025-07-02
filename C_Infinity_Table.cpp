#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int r=0;
    while(r*r<n){
        r++;
    }
    int R,C;
    if(r*r==n){
        C=1;
        R=r;
    }
    else{
        n-=(r-1)*(r-1);
        if(n<=r){
            R=n%(r+1);
            C=r;
        }
        else{
            R=r;
            C=r-n%(r+1)-1;
        }
    }

    cout<<R<<" "<<C<<endl;
     
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}