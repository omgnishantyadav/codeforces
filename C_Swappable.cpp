#include <bits/stdc++.h>
using namespace std;

int comb(int n){
    return (n*(n-1))/2;
}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
    }
    long long sum=(n*(n-1))/2;
    for(auto it: m){
        if(it.second>1)sum-=comb(it.second);
    }

    cout<<sum;
}