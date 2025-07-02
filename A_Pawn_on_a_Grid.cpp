#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w; cin>>h>>w;
    vector<string> v(h);
    for(int i=0; i<h; i++){
        cin>>v[i];
    }
    int ans=0;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(v[i][j]=='#') ans++;
        }
    }
    cout<<ans;
}