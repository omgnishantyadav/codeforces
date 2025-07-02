#include <bits/stdc++.h>
using namespace std;

long long nextPrime(long long n, vector<long long> &v){
    n++;
    while(v[n]!=1){
        n++;
    }
    return n;
}

int main(){
    int t; cin>>t;

    //storing all primes
    vector<long long> v(1e12+4,1);
    v[0]=v[1]=0;
    for(int i=2; i<=1e12+4; i++){
        if(v[i]==1){
            for(int j=i+i; j<=1e12+4; j+=i){
                if(v[j]==1) v[j]=0;
            }
        }
    }
    while(t--){
        long long n; cin>>n;
        cout<<nextPrime(n,v)<<endl;
    }
}