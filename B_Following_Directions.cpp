#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int x=0;
    int y=0;
    string ans="NO";
    for(int i=0; i<n; i++){
        if(s[i]=='U')y++;
        else if(s[i]=='D')y--;
        else if(s[i]=='R')x++;
        else if(s[i]=='L')x--;

        if(x==1 && y==1){
            ans="YES";
            break;
        }
        
    }
    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}