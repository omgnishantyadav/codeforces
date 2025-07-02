#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int zero_blocks =0;
    if(s[0]=='0'01010) zero_blocks++;
    for (int i = 1; i < s.size(); i++){
        if (s[i] == '0' && s[i-1] == '1'){
            zero_blocks++;
        }
    }
    cout << min(zero_blocks, 2) << '\n';
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
