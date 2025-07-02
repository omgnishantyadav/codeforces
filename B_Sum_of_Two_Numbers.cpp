#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int ans=0;
    while(n>0){
        ans+=(n%10);
        n/=10;
    }
    return ans;
}
void solve(){
    int n; cin>>n;
    int x=n-1;
    int y=1;
    if(sum(n-1)!=n-1){
        x=n/2;
        y=x+1;
    }
    cout<<x<<" "<<y<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}