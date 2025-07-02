#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,c; cin>>n>>c;
    vector<int> v(n);
    for(int i=n-1; i>=0; i--){
        v[i]=c%10;
        c/=10;
    }
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++){
        if(v[i]==2){
            a[i]=1;
            b[i]=1;
        }
        else if(v[i]==1){
            a[i]=1;
            b[i]=0;
        }
        else if(v[i]==0){
            a[i]=0;
            b[i]=0;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<b[i];
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}