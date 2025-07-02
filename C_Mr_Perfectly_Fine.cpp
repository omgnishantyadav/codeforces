#include <bits/stdc++.h>
using namespace std;
    
void solve(){
    int n; cin>>n;
    long long a = 1e9;
    long long b= 1e9;
    long long c= 1e9;
    for(int i=0; i<n; i++){
        long long m; cin>>m;
        string s; cin>>s;

        if(s=="01") b=min(m,b);
        if(s=="11") c=min(m,c);
        if(s=="10") a=min(m,a);
    }

    long long ans = min(a+b,c);
    if(ans>1e6) ans=-1;
    cout<<ans<<endl;

}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}