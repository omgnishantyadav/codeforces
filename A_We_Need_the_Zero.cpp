#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    int xOR=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        xOR^=v[i];
    }
    if(n%2==0 && xOR!=0) cout<<-1<<endl;
    else cout<< xOR <<endl;
    
}


int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}