#include <bits/stdc++.h>
using namespace std;

int solve(long long x, long long y){
    if(x==y) return 1;
    x++;
    long long unitplace = (x)%10;
    while(x<y){
        x++;
        unitplace*=(x%10);
        unitplace=unitplace%10;

        if(unitplace==0) break;
    }
    return unitplace;
}

int main(){
    long long a,b; cin>>a>>b;

    cout<<solve(a, b);
}