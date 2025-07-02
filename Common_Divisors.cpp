#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    vector<int> v(n);
    vector<int> hash(1e6+6,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        hash[v[i]]++;
    }
    for(int i=1e6+5; i>=1; i--){
        if(hash[i]>=2){
            cout<<hash[i];
            break;
        }
    }
    
}