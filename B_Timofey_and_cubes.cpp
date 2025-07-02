#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int i=0;
    while(i<n/2){
        if(i%2==0){
            swap(v[i], v[n-i-1]);
        }
        i++;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}