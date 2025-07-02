#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin>>n;
    if(n<=2){
        cout<<n;
        return 0;
    }
    if(n%2==0){
        if(n%3==0) cout<<(n-1)*(n-2)*(n-3);
        else cout<<(n)*(n-1)*(n-3);
    }
    else{
        cout<<(n)*(n-1)*(n-2);
    }

}