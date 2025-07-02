#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        int Sqroot=pow(n,0.5);

        if(Sqroot*Sqroot==n){
            cout<<0<<" "<<Sqroot<<endl;
        }
        else cout<<-1<<endl;
    }
}