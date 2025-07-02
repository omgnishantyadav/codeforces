#include <bits/stdc++.h>
using namespace std;

int primeFactors(int n){
    map<int,int> m;
    for(int x=2; x*x<=n; x++){
        while(n%x==0){
            m[x]++;
            n/=x;
        }
    }
    if(n>1) m[n]++;
    int ans=1;
    for(auto it:m){
        ans*=(it.second+1);
    }
    return ans;
}

int main(){
    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        cout<<primeFactors(a)<<endl;
    }
}