#include <bits/stdc++.h>
using namespace std;


void solve(int n, int m, int a, int b, int& ans){
    if(n==1 && m==1) return;
    ans++;
    if(n>m) n/=2;
    else m/=2;
    a=n/2;
    b=m/2;
    solve(n,m,a,b,ans);
}
int main(){
    int tc; cin>>tc;
    while(tc--){
        long long n,m,a,b; cin>>n>>m>>a>>b;
        int ans=1;
        
        a=n/2;
        b=m/2;
        solve(n,m,a,b,ans);
        cout<<ans<<endl;
    }
}