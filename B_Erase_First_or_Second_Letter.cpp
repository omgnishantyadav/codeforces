#include <bits/stdc++.h>
using namespace std;

void fun(string s, unordered_map<string,bool>& m, int& ans){
    if(m[s]==true) return;

    m[s]=true;
    ans++;
    
    if(s.size()==1) return;
    
    char temp = s[0];
    s.erase(s.begin());
    fun(s,m,ans);
    s.erase(s.begin());
    s=temp+s;
    fun(s,m,ans);
    return;

}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        unordered_map<string,bool> m;
        int ans=0;

        fun(s,m,ans);

        cout<<ans<<endl;
    }
}