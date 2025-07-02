#include <bits/stdc++.h>
using namespace std;

void solve(const vector<int> &v){
    long long n; cin>>n;
    string ans="NO";
    long long sqroot = sqrt(n);
    if(sqroot * sqroot == n && n != 1 && v[sqroot] == 1) ans = "YES";
    cout << ans << endl;
}

int main(){
    int t; cin>>t;
    int N = 1e6 + 1;
    vector<int> v(N, 1);
    v[0] = v[1] = 0;
    for (int i = 2; i * i < N; ++i) {
        if (v[i] == 1) {
            for (int j = i * i; j < N; j += i){
                v[j] = 0;
            }
        }
    }
    while(t--) solve(v);
}