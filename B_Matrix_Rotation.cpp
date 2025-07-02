#include <bits/stdc++.h>
using namespace std;

string check(int i, vector<int> v, string &ans){
    int a= v[(i+1)%4];
    int b= v[(i+3)%4];
    int c= v[(i+4)%4];
    int d= v[(i+2)%4];

    if(a<b && a<c && b<d && c<d) ans="YES";
    return ans;
}

void solve() {
    vector<int>v(4);
    for(int i=0; i<4; i++){
        cin>>v[i];
    }
    string ans="NO";
    for(int i=0; i<4; i++){
        check(i,v,ans);
        if(ans=="YES")break;
    }

    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}