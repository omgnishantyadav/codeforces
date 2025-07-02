#include <bits/stdc++.h>
using namespace std;

string sub(string a, string b) {
    int n = a.size();
    while (b.size() < n) {
        b = '0' + b;
    }

    string ans = "";
    int carry = 0;

    for (int i = n - 1; i >= 0; i--) {
        int x = (a[i] - '0') - carry;
        int y = (b[i] - '0');

        if (x < y) {
            x += 10;
            carry = 1;
        } else {
            carry = 0;
        }

        ans += (x - y + '0');
    }

    reverse(ans.begin(), ans.end());

    // remove leading zeros
    int i = 0;
    while (i < ans.size() - 1 && ans[i] == '0') i++;
    return ans.substr(i);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string N;
        cin >> N;

        if (N[0] < '9') {
            string temp(n, '9');
            cout << sub(temp, N) << endl;
        } else {
            string temp(n + 1, '1');
            cout << sub(temp, N) << endl;
        }
    }
}
