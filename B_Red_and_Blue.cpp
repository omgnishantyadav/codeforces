#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> r(n);
        int rsum=0;
        int maxRsum=0;
        for(int  i=0; i<n; i++){
            cin>>r[i];
            rsum+=r[i];
            maxRsum=max(maxRsum, rsum);
        }

        int bsum=0;
        int maxBsum=0;
        int m; cin>>m;
        vector<int> b(m);
        for(int  i=0; i<m; i++){
            cin>>b[i];
            bsum+=b[i];
            maxBsum=max(maxBsum, bsum);
        }
        cout<<maxRsum+maxBsum<<endl;

    }
}