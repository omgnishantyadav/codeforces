#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int> v(n);
    int maxm=-1;
    int maxm2=-1;
    int ind=-1;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(maxm<v[i]){
            ind=i;
            maxm=v[i];
        }  
    }

    for(int i=0; i<n; i++){
        if(i!=ind)maxm2=max(maxm2,v[i]);  
    }
    for(int i=0; i<n; i++){
        if(v[i]==maxm && maxm2!=-1){
            cout<<v[i]-maxm2<<" ";
        }
        else cout<<v[i]-maxm<<" "; 
    }


    cout<<"\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}