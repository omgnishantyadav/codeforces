#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int r=n%9;
    if(r==0){
        cout<<"YES"<<endl;
        return;
    }
    else if(r%2==0){
        cout<<"NO"<<endl;
        return;
    }
    int two=0,three=0;
    while(n>0){
        if(n%10==2) two++;
        else if(n%10==3) three++;
        n/=10;
    }
    r=9-r;
    
    if(r==2 && two>=1) cout<<"YES"<<endl;
    else if(r==4 && two>=2) cout<<"YES"<<endl;
    else if(r==6 && (two>=3 || (three>=1)) cout<<"YES"<<endl;
    else if(r==8 && (two>=4 || (two>=1 && three>=1)))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}