#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(i==0) cout<<v[i];
        else cout<<v[i]-v[i-1];
        cout<<" ";
    }
}