#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string p,s; cin>>p>>s;
        string ans="YES";
        int i=0,j=0;
        while(i<(int)p.size() && j<(int)s.size()){
            char c=p[i];
            int cntP=0;
            while(i<(int)p.size() && p[i]==c){ cntP++; i++; }
            int cntS=0;
            while(j<(int)s.size() && s[j]==c){ cntS++; j++; }
            if(cntS<cntP || cntS>2*cntP){ ans="NO"; break; }
        }
        if(i<(int)p.size() || j<(int)s.size()) ans="NO";
        cout<<ans<<"\n";
    }
    return 0;
}
