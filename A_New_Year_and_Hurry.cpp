#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    k=240-k;
    int ans=1;
    while(k-5*ans>=0 && ans<=n){
        k-=ans*5;
        ans++;
    }
    ans--;
    cout<<ans;
}