#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        vector<int>v(n);
        int cnt=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            cnt+=v[i];
        }

        string ans="NO";
        for(int i=0; i<n; i++){
            if(i+1<n && v[i]+v[i+1]==0){
                ans="YES";
                break;
            }
        }
        if(cnt==n) ans="YES";

        
        cout<<ans<<endl;   }
}