#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a,b; cin>>a>>b;
    int n=a.size()-1;
    int m=b.size()-1;
    int ans=n+m+2;
    while(n>=0 && m>=0){
        if(a[n]==b[m]){
            n--;
            m--;
            ans-=2;
        }
        else break;
    }
    cout<<ans<<endl;
    
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
}