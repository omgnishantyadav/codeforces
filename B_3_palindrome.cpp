#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int t=n%4;
    for(int i=0; i<n-t; i+=4){
        cout<<"aabb";
    }

    if(t>0)  cout<<'a';
    t--;
    if(t>0)  cout<<'a';
    t--;
    if(t>0)  cout<<'b';
}