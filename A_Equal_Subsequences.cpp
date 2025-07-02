#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    vector<int> v(n,0);
    for(int i=n-1; k>0; i--){
        k--;
        v[i]=1;
    }
    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    cout<<endl;


}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}