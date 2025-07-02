#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int sum; cin>>sum;
    vector<long long> v(n+1,0);
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        v[i]=v[i-1]+a[i-1];
    }
    int cnt=0;
    int i=0; int j=1;
    while(i<j && j<=n){
       if(v[j]-v[i]==sum) {cnt++; i++;}
       else if(v[j]-v[i]>sum) i++;
       else j++;
    }
    cout<<cnt;
}