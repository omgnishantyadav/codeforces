#include <bits/stdc++.h>
using namespace std;

int fun(int r, int c, vector<vector<int>> mat){
    int res = INT_MIN;
    int n = mat.size();
    int m = mat[0].size();
    for(int j = 0; j < m; j++){
        res = max(res, mat[r][j]);
    }
    for(int i = 0; i < n; i++){
        res = max(res, mat[i][c]);
    }
    return res;
}

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    int ans = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans = max(ans, fun(i, j, mat));
        }
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}