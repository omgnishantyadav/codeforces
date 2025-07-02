#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    if(n%2==0){
        for(int i=n; i>0; i--){
            cout<<i<<" ";
        }
    }
    else{
        if(n==3){
            cout<<-1;
        }
        
        else{
            cout<<n<<" "<<n-1<<" ";
            for(int i=1; i<n-1; i++){
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}