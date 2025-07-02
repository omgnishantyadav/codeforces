#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;

int fun (int n){
    if(n==0) return 1;
    long long u=fun(n/2)%MOD;
    u=(u*u)%MOD;
    if(n%2==1) u=(u*2)%MOD;
    return u;
}
int main(){
    int n; cin>>n;
    cout<<fun(n);
}