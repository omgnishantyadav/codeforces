#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    long long ans=0;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]=="Tetrahedron") ans+=4;
        else if(v[i]=="Cube") ans+=6;
        else if(v[i]=="Octahedron") ans+=8;
        else if(v[i]=="Dodecahedron") ans+=12;
        else if(v[i]=="Icosahedron") ans+=20;
    }
    cout<<ans;
}