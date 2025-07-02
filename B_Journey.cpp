#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,n;
    cin>>n>>a>>b>>c;
    int k=n%(a+b+c);
    int ans=n/(a+b+c);
    ans*=3;
    if(k>0){
        k-=a;
        ans++;
    }
    if(k>0){
        k-=b;
        ans++;
    }
    if(k>0){
        k-=c;
        ans++;
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}