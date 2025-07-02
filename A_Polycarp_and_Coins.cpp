#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int r=n%3;
    int c1,c2;
    c1 = c2 = n/3;
    if(r==1)c1++;
    if(r==2)c2++;
    cout<<c1<<" "<<c2<<endl;
}
int main() {
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
}