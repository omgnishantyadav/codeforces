#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int ans=INT_MAX;
    int temp=0;
    for(auto x: m){
        int cnt=x.second+1;
        if(a[0]==x.first) cnt--;
        if(a[n-1]==x.first)cnt--;
        for(int i=0; i<n-1; i++){
            if(a[i]==a[i+1]&& a[i]==x.first){
                cnt--;
            }
        }
        ans=min(cnt,ans);
    }
    
    cout<<ans<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
} 