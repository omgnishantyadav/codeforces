#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> v(3);
    cin>>v[0]>>v[1]>>v[2];

    for(int i=0; i<5; i++){
        sort(v.begin(),v.end());
        v[0]++;
    }

    cout<<v[0]*v[1]*v[2]<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}