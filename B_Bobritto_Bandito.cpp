#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,l,r; cin>>n>>m>>l>>r;
        if(r>=m){
            cout<<0<<" "<<m<<endl;
        }
        else {
            cout<<r-m<<" "<<r<<endl;
        }

    }
}