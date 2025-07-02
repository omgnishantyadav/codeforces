#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<long long> v(n,0);
        for(int i=0; i<k; i++){
            int b,c; cin>>b>>c;
            v[b-1]+=c;
        }
        sort(v.begin(), v.end(), greater<long long>());
        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
}