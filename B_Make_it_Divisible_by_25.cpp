#include <bits/stdc++.h>
using namespace std;


int fun(string s, string t){
    int ans=0;
    int ptr=s.size()-1;
    while(ptr>=0 && s[ptr]!=t[1]){
        ptr--;
        ans++;
    }
    if(ptr<0) return 20;
    ptr--;
    while(ptr>=0 && s[ptr]!=t[0]){
        ptr--;
        ans++;
    }
    if(ptr<0) return 20;
    return ans;
    
}
 
void solve(){
    string s; cin>>s;
    vector<string> p_cases = {"00", "25", "50", "75"};
    int ans=20;
    for(auto x: p_cases){
        ans=min(ans, fun(s,x));
    }
    cout<<ans<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}