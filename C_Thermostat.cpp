#include <bits/stdc++.h>
using namespace std;

int solve(){
    int l,r,x; cin>>l>>r>>x;
    int a,b; cin>>a>>b;
    if(a==b) return 0;
    else if(abs(a-b)>=x) return 1;
    else if(r - max(a, b) >= x || min(a, b) - l >= x) return 2;
    else if(r - b >= x && a - l >= x || r - a >= x && b - l) return 3;
    return -1;
}

int main(){
    int t; cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}