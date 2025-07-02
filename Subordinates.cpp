#include <bits/stdc++.h>
using namespace std;

vector<vector<int>tree;
vector<int> v;

int main(){
    int n; cin>>n;
    tree.resize(n+1);
    v.resize(n+1);
    
    for(int i=2; i<=n; i++){
        cin>>v[i];
        tree[v[i]].push_back(i)
    }
    
}