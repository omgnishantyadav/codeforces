#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n; cin>>n;
    cout<<2*n-3<<endl;
    for(int i=1; i<n; i++){
        cout<<i<<" "<<i<<" "<<n<<endl;
    }
    for(int i=3; i<=n; i++){
        cout<<i<<" "<<1<<" "<<i-1<<endl;
    }
    

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}