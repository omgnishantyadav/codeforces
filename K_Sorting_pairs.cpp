#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<string,int>>v;
    int i=n;
    while(i--){
        string s;
        int ind=0;
        string name;
        for(int i=0; i<s.size(); i++){
            if(s[i]==" ") {
                ind=i+1;
                name=s[0:ind];
            
        }
        p.first=name;
        p.second=num;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}