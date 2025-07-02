#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n,0);
    long long temp=1;
    int cnt=0;
    for(int i=1; i<n; i++){
        if(__gcd(n,i)==1){
            v[i]=1;
            cnt++;
            temp=(temp*i)%n;
        }
    }
    
    if(temp!=1){
        v[temp]=0;
        cnt--;
    }

    cout<<cnt<<endl;
    for(int i=1; i<n; i++){
        if(v[i]) cout<<i<<" ";
    } 
}