#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k; cin>>n>>k;
    int ans=0;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    while(n>0){
        ans+=n%k;
        n/=k;
    }
    cout<<ans<<endl;
     
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}