#include <bits/stdc++.h>
using namespace std;




void solve(){
    int n; cin>>n;
    string s; cin>>s;
    vector<int> a(n);
    vector<int> b(n,0);
    long long temp=0;
    for(int i=0; i<n; i++){
        if(s[i]=='R'){
            a[i]=n-i-1;
        }
        else{
            a[i]=i;
        }
        temp+=a[i];
    }
    for(int i=0; i<n; i++){
        if(s[i]=='R'){
            b[i]=2*i+1-n;
        }
        else{
            b[i]=n-2*i-1;
        }
    }

    sort(b.rbegin(),b.rend());
    for(int i=0; i<n; i++){
        if(b[i]>=0){
            temp+=b[i];
        }
        cout<<temp<<" ";
    }
    cout<<endl;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
}