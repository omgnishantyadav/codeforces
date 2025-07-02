#include <bits/stdc++.h>
using namespace std;

long long fun(vector<int>& v){
    int n = v.size();
    long long ans = 0;
    int zeroes = 0;

    for(int i = 0; i < n; i++)
        if(v[i] == 0) zeroes++;

    for(int i = 0; i < n; i++){
        if(v[i] == 0) zeroes--;
        else          ans += zeroes;
    }
    return ans;
}

long long operation(vector<int> v){
    int n = v.size();
    vector<int> temp = v;

    for(int i = 0; i < n; i++){
        if(temp[i] == 0){
            temp[i] = 1;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(v[i] == 1){
            v[i] = 0;
            break;
        }
    }
    return max(fun(v), fun(temp));
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    long long a = fun(v);
    long long b = operation(v);

    cout << max(a, b) << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}
