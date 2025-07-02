#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x,y,a; cin>>x>>y>>a;
        a++;
        int extra = a%(x+y);
        if(extra<=x && extra!=0) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}