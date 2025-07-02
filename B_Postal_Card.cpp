#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<string> big(n);
    for(int i=0; i<n; i++){
        cin>>big[i];
    }
    vector<string> small(m);
    for(int i=0; i<m; i++){
        cin>>small[i];
    }
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(big[i].substr(3,3)==small[j]){
                ans++;
                break;
            }
        }
    }
    cout<<ans;
}