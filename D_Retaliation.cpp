#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    string ans="YES";
    int d=(v[1]-v[0]);
    for(int i=1; i<n; i++){
        if(abs(v[i]-v[i-1])!=abs(d)){
            ans="NO";
            break;
        }
    }
    if(ans="NO"){
        cout<<ans<<endl;
        return;
    }


    for(int i = 0; i < n; i++) {
    if(diff < 0)
        v[i] += diff * (n - i);
    else
        v[i] -= diff * (i + 1);
}
    if(v[0] >= 0 && v[0] % (n + 1) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    }
int main(){
    int t; cin>>t;
    while(t--) solve();
}