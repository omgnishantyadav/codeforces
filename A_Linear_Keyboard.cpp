#include <bits/stdc++.h> 
using namespace std;

void solve(){
    string str,s; cin>>str>>s;
    int ans=0;
    char ch=s[0];
    map<char,int> m;
    for(int i=0; i<str.size(); i++){
        m[str[i]]=i;
    }
    for(int i=1; i<s.size(); i++){
        ans+=abs(m[ch]-m[s[i]]);
        ch=s[i];
    }
    cout<<ans<<endl;

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}