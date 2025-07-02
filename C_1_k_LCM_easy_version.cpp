#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t>0){
        t--;
        long long n,k; cin>>n>>k;
        if(n%4==0) cout<<n/2<<" "<<n/4<<" "<<n/4;
        if(n%4==1) cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2;
        if(n%4==2) cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2;
        if(n%4==3) cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2;
        cout<<endl;
    }

    return 0;
}