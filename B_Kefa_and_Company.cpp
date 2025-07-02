#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,d; cin>>n>>d;
    vector<pair<long long, long long>> v(n);
    for(int i=0; i<n; i++){
        int m,s; cin>>m>>s;
        v[i] = {m,s};
    }

    sort(v.begin(),v.end());
    long long ans =0; 
    int i=0; int j=0;
    long long sum=0;
    while(j<n && i<=j){
        long long temp=v[i].first + d;
        while(temp>v[j].first && j<n){
            sum+=v[j].second;
            j++;
        } 
        ans= max(ans, sum);
        sum-=v[i].second;
        i++;
        
    }
    cout<<ans;
}