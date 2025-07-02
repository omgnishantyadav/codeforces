#include <bits/stdc++.h>
using namespace std;


void solve(){
    int ans=1;
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        int j=i+1;
        while(j<n){
            if(v[i]+1<v[j]){
                ans++;
                break;
            }
            j++;
        }
        i=j-1;
    }
    cout<<ans<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}