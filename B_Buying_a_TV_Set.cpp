#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    long long w=x/__gcd(x,y); long long h=y/__gcd(x,y);
    cout<<min(a /w, b/h);
}