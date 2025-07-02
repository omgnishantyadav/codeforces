#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int k=n%4;
        int ans=n/4+k/2;
        cout<<ans<<endl;
    }
}