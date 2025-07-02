#include <bits/stdc++.h>
using namespace std;

long long sum(int n, vector<int> v){
    long long ans=0;
    for(int i=0; i<v.size(); i++){
        ans+=v[i];
    }
    return ans;
}

int main(){
    int num,n; cin>>num>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    long long ans=0;
    for(int i=1; i<=n; i++){
        if(i%2==0) ans-=sum(i,v);
        else ans+=sum(i,v);
    }
    cout<<endl;
}