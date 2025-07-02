#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x; cin>>n>>x;
    vector<long long> ans(n,x);
    long long or_val = 0;         // bug 4 fixed
    bool flag = true;

    for(int i = 0; i < n-1; ++i){  // bug 1 fixed
        if( ((or_val | i) & x) == (or_val | i) ){
            or_val |= i;
            ans[i] = i;
        }else{
            flag = false;          // bug 2 fixed
            break;
        }
    }

    if(flag && ((or_val | (n-1)) == x)){   // bug 3 fixed
        ans[n-1] = n-1;
    }

    for(auto it : ans) cout << it << ' ';
    cout << '\n';
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}