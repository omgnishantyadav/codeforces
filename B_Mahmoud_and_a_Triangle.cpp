#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    string ans = "NO";
    for(int i=1; i<n-1; i++){
        if(v[i-1]+v[i]>v[i+1]){
            ans="YES";
            break;
        }
    }
    cout<<ans;
}