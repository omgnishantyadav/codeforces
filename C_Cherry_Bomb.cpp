#include <bits/stdc++.h>
using namespace std;

#define for(a,b) for(int i=a; i<b; i++)

void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n),b(n);
    int s=-1;

    for(0,n){
        cin>>a[i];
    }
    for(0,n){
        cin>>b[i];
    }
    
    for(0,n){
        if(b[i]!=-1){
            if(s==-1){
                s=a[i]+b[i];
            }
            else{
                if(s!=a[i]+b[i]){
                    cout<<0<<endl;
                    return;
                }
            }
        }
    }

    if(s==-1){
        sort(a.begin(),a.end());
        int mx=a[n-1]-a[0];
        cout<<k-mx+1<<endl;
        return;
    }

    for(0,n){
        if(a[i]>s || s - a[i] > k){
            cout<<0<<endl;
            return;
        }
    }

    cout<<1<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}
