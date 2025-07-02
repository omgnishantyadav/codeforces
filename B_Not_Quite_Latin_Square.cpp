#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<string> v(3);
    int ans=0;
     ans^=(65^66^67^63);
    for(int i=0; i<3; i++){
        cin>>v[i];
        for(int j=0; j<3; j++){
            ans^=static_cast<int>(v[i][j]);
        }
    }
    cout<<static_cast<char>(ans)<<endl;
    
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}