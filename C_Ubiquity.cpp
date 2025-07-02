#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

int main(){
    long long n; cin>>n;

    long long ans = (n*(n-1))%MOD;
    for(int i=0; i<n-2; i++){
        ans*=8;
        ans%=MOD;
    }
    cout<<ans;

}