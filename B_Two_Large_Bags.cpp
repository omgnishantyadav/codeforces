#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        int t; cin>>t;
        m[t]++;
    }
    bool flag=false;
    for(auto it: m){
        if(it.second>=2){
            m[it.first+1]+=(it.second-2);
        }
        else if(it.second==1){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"No";
    }
    else cout<<"Yes";
    cout<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
