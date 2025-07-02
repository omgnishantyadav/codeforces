#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s,r; cin>>n>>s>>r;
    int t = r/(n-1);
    int x= r%(n-1);
    vector<int> v(n,t);
    v[0]=s-r;
    for(int i=1; i<=x; i++){
        v[i]++;
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}