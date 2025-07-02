#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    string ans="YES";
    int flag =0;
    for(int i=0; i<n; i++){
        if(v[i]==1 && flag == 1){
            ans="NO";
            break;
        }
        else if(v[i]==1 && flag == 0){
            flag++;
            i+=(x-1);
        }
    }

    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}