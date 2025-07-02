#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m; cin>>n>>m;
    vector<long long> a(n), b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    map<long long,pair<long long,long long>> mp;

    for(int i=0; i<n; i++){
        mp[a[i]].first++;
    }
    for(int i=0; i<m; i++){
        mp[b[i]].second++;
    }
    long long ans=0;
    for(auto it : mp){
        ans+=((it.second.first)*(it.second.second));
    }
    cout<<ans;
    
}