#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v(n),a,b;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    string ans="YES";
    for(int i=0; i<n; i++){
        if(i<n-2 && v[i]==v[i+2]){
            ans="NO";
            break;
        }
        else if(i<n-1 && v[i]==v[i+1]){
            a.push_back(v[i]);
            b.push_back(v[i+1]);
            i++;
        }
        else a.push_back(v[i]);
    }
    cout<<ans<<endl;
    if(ans=="YES"){
        cout<<a.size()<<endl;
        for(int i=0; i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<b.size()<<endl;
        for(int i=b.size()-1; i>=0; i--){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int tc=1;
    while (tc--) {
        solve();
    }
}