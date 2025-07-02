#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    if(x==0||y==0) return 1;

    return gcd(y, x%y)
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> v(n);
        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=v[i];
        }

        sort(v.begin(),v.end());
        for(int i=n-1; i<n; i++){
            gcd(v[i])
        }

    }
}