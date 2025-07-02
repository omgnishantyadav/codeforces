#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    long long sum=0;
    for(int i=1; i<n; i++){
        if(v[i]+v[i-1]<-v[i]-v[i-1]){
            v[i]=-v[i];
            v[i-1]=-v[i-1];
        }
        sum+=v[i-1];
    }
    sum+=v[n-1];
    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}