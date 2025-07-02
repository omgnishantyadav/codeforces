#include <bits/stdc++.h>
using namespace std;

void solve(){
 
    int w,h,a,b;
    cin>>w>>h>>a>>b;
 
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
 
    int xgap=abs(x2-x1)-a;
    int ygap=abs(y2-y1)-b;
 
    if(xgap<0){
        if(ygap%b!=0){
            cout<<"NO\n";
            return;
        }
    }
    else if(ygap<0){
        if(xgap%a!=0){
            cout<<"NO\n";
            return;
        }
    }
    else if(xgap%a!=0 && ygap%b!=0){
        cout<<"NO\n";
        return;
    }
 
    cout<<"YES\n";
    
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}