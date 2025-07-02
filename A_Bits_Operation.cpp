#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,n; cin >> t>>n;
    
    
    while(t--) {
        int q; cin >> q;

        if(q==1){
            long long x; cin>>x;
            n=n|x;
        }
        else if(q==2){
            long long x; cin>>x;
            n=n&x;
        }
        else if(q==3){
            long long x; cin>>x;
            n=n^x;
        }
        else{
            n=~n;
        }
        cout<<n<<endl;
    
        
    }
}