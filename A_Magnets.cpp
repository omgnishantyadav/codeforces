#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ans=1;
    for(int i=1; i<n; i++){
        if(v[i]!=v[i-1]) ans++;
    }
    cout<<ans;
}