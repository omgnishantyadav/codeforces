#include <bits/stdc++.h>
using namespace std;

void solve(int &n){
    int opp, x; cin >> opp >> x;
    if (opp == 1) {
        cout << ((n >> x) & 1) << endl;
    } else if (opp == 2) {
        n = (n | (1 << x));
        cout << n << endl;
    } else if (opp == 3) {
        n = (n & ~(1 << x));
        cout << n << endl;
    } else if (opp == 4) {
        n = (n ^ (1 << x));
        cout << n << endl;
    }
}

int main(){
    int q, n; cin >> q >> n;
    while(q--){
        solve(n);
    }
}