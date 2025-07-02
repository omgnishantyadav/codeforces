#include <bits/stdc++.h>
using namespace std;

long long fact(long long n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    long long n; cin>>n;
    vector<long long> p(n),q(n);
    long long a=0,b=0;
    for(int i=0; i<n; i++){
        cin>>p[i];
        if(p[i]!=i+1)a+=((p[i]-1)*fact(n-i-1));
    }
    for(int i=0; i<n; i++){
        cin>>q[i];
        if(q[i]!=1) b+=((q[i]-1)*fact(n-i-1));
    }
    cout<<abs(a-b);

}