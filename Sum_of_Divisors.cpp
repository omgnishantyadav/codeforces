#include <bits/stdc++.h>
using namespace std;

#define ll long long;
const ll MOD = 1e9+7;
const ll MAX = 1e12;

map<ll,ll> primefactorisation(ll n){
    map<ll,ll> pfactors;
    for(ll x=2; x*x<=n; x++){
        while(n%x==0){
            pfactors[x]++;
            n/=x;
        }
    }
    if(n>1) pfactors[n]++;
    return pfactors;
}

ll sumOfDivisors(map<ll,ll>m){
    ll num
}

int main(){
    ll n; cin>>n;
    vector<ll> sigma(MAX+1);
    ll ans=0;
    while(n--){
        map<ll,ll> pfactors = primeFactorisation(n);
        ans=(ans+sumOfDivisors(divisors))%MOD;
    }
    cout<<ans<<endl;


}