#include <bits/stdc++.h>
using namespace std;

int modProduct(int n, int x){
    
}

int main(){
    int num;n; cin>>num>>n;
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