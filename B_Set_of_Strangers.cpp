#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> d(n*m+1,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
            if(d[a[i][j]]==0)d[a[i][j]]=1;
            if(i>0 && a[i-1][j]==a[i][j]) d[a[i][j]]=2;
            if(j>0 && a[i][j-1]==a[i][j]) d[a[i][j]]=2;
        }

    }

    int c1=0;int c2=0;
    for(int i=0; i<=n*m; i++){
        if(d[i]==1) c1++;
        if(d[i]==2)c2++;
    }
    int ans=c1+2*c2;
    ans -= (c2 > 0)? 2 : 1;
    cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
