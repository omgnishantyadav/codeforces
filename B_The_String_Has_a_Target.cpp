#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    char ch=s[0];
    int ind=0;
    for(int i=1; i<n; i++){
        if(s[i]<ch){
            s[i]=ch;
            ind=i;
        }
    }
    if(ch<=s[0]){
        s=revese(s.substr(0,ind))+s.substr(ind,n);
    }
    cout<<s<<endl;
    
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}