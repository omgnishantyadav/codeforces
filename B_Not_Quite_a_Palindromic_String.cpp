#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;

    int one=0,zero=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1')one++;
        else zero++;
    }

    string ans="NO";
    if((one/2+zero/2)>=k){
        while(k>0){
            if(one>=2) one-=2;
            else if(zero>=2)zero-=2;
        }
    }

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}