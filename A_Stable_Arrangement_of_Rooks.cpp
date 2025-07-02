#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n,k; cin>>n>>k;
    if(k==1 && n==1){
        cout<<"R"<<endl;
        return;
        
    }
    if((n+1)/2<k){
        cout<<-1<<endl;
        return;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0 && i==j && k>0) {
                k--;
                cout<<"R";
            }
            else cout<<".";
        }
        cout<<endl;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}