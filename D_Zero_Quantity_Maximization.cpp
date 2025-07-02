#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int ans=0;
    int zero=0;
    map<pair<int,int>,int> m;
    for(int i=0; i<n; i++){
        if(a[i]==b[i] && b[i]==0) zero++;
        if(a[i]!=0)m[{-b[i]/__gcd(a[i],b[i]),a[i]/__gcd(a[i],b[i])}]++;
    }

    
    for(auto it:m){
        ans=max(ans,it.second);
    }
    ans+=zero;
    cout<<ans;
}