#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    long long ans=v[n-1];
    for(int i=n-2; i>=0; i--){
        v[i]=min(v[i],v[i+1]-1);
        if(v[i]<0) break;
        ans+=v[i];
    }
    cout<<ans;
}