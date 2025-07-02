#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,n;
    cin>>a>>b>>n;
    int B = min(a,n);
    int G = min(b,n);
    cout<<B+G-n+1;
}