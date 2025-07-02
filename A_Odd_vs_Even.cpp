#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        if(n%2==1) cout<<"Odd";
        else if((n/2)%2==1) cout<<"Same";
        else cout<<"Even";
        cout<<endl;
    }
}