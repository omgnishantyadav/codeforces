#include <bits/stdc++.h>
using namespace std;


 
void solve(){
   int n,k; cin>>n>>k;
   string ans="NO";
   string s; cin>>s;
   int i=0; int j=s.size()-1; int cnt=0;
   while(i<=j){
        if(s[i]==s[j])cnt++;
        else break;
        i++;
        j--;
   }

   if(cnt>k) ans="YES";
   else if(cnt==k && j-i>=1) ans="YES";
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