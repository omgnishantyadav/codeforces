#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ans = 0;
        for(int i=1; i<n; i++){
            if(__gcd(a[i-1],a[i])!=1){
                a[i-1]/=__gcd(a[i-1],a[i]);
                //a[i]/=__gcd(a[i-1],a[i]);
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}