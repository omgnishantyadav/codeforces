#include <bits/stdc++.h>
using namespace std;

int F(int n){
    if(n==1) return 1;
    return F(n-1) + n*(n+1)/2;
}
int f(int n){
    return n*(n+1)/2;
}

int main(){
    long long n,s; cin>>n>>s;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    long long i=0; long long j=0;
    long long sum=0;
    long long ans=0;
    while(j<n){
        if(sum+v[j]>s){
            sum-=v[i];
            if(i==0)ans+=F(j-i);
            i++;
        }
        else{
            sum+=v[j];
            if(i!=0) ans+=f(j-i+1);
            j++;
        }
    }
    cout<<ans;

}