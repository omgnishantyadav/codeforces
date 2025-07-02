#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n),b(n),c(n),d(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
            cin>>c[i];
        }

        for(int i=0; i<n; i++){
            d[i]=max(a[i],max(b[i],c[i]));
        }
        sort(d.rbegin(), d.rend());
        cout<<d[0]+d[1]+d[2]<<endl;
    }
}