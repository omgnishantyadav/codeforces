#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string ans="No";
    int cnt=0;
    set<char> set;
    int i=0;
    while(i<n){
        int temp=set.size();
        set.insert(s[i]);
        if(set.size()==temp){
            ans = "Yes";
            cnt++;
        }
        i++;
    }

    if(cnt==1 && s[0]==s[n-1]) ans="No";
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--) solve();
}