#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n; cin>>n;
    
    set<int> s{0};
    long long cur=0;;
    int ans=0;
    while(n--){
        int x; cin>>x;
        cur+=x;
        if(s.count(cur)){
            ans++;
            cur=0;
            s.clear();
        }
        s.emplace(cur);
    }
    cout<<ans<<endl;
    

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t; while(t--) solve();
}