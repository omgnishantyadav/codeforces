#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int ones=0;
    int ind=-1;
    long long ans=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            ones++;
            ind=i;
        }
    }
    sort(v.begin(), v.begin()+ind+1);
    while(ones--){
        ans+=v[ind];
        ind--;
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}