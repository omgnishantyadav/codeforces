#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> cnt(10, 0);
    for(char c : s) cnt[c - '0']++;

    // Remove one each of 1, 6, 8, 9
    vector<int> special = {1, 6, 8, 9};
    for(int d : special) cnt[d]--;

    // Build the rest of the number (sorted for lex smallest)
    string rest = "";
    for(int d = 0; d <= 9; d++)
        rest += string(cnt[d], '0' + d);

    sort(rest.begin(), rest.end());

    // Try all permutations of 1,6,8,9
    vector<int> perm = {1, 6, 8, 9};
    do {
        string candidate = rest + string(1, perm[0] + '0') + string(1, perm[1] + '0') + string(1, perm[2] + '0') + string(1, perm[3] + '0');
        // Remove leading zeros if any
        if(candidate[0] == '0') continue;
        // Check divisibility by 7
        long long num = 0;
        for(char c : candidate) num = (num * 10 + (c - '0')) % 7;
        if(num == 0) {
            cout << candidate << endl;
            return 0;
        }
    } while(next_permutation(perm.begin(), perm.end()));

    cout << 0 << endl;
}