#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> d(n);
    vector<int> a(n);
    //bool flag=true;
    for(int i=0; i<n; i++){
        cin>>d[i];
    }
    a[0]=d[0];
    for(int i=1; i<n; i++){
        if(a[i-1]-d[i]>=0 && d[i]!=0){
            cout<<-1<<endl;
            return;
        }
        a[i]=a[i-1]+d[i];
    }
    for(auto it:a) cout<<it<<" ";
    cout<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}