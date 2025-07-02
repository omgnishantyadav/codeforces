#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int ans = -1;
    bool flag = true;
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] == '0'){
            if(flag) ans++;
        }
        else{
            flag = false;
            ans++;
        }
    }
    cout << ans<<endl;
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}