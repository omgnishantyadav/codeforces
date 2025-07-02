#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    int j=0;
    for(int i=0; i<n; i++){
       mat[i][j%n]++;
       j++;
       mat[i][j%n]++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}