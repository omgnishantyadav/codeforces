#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int oddCount=0;
        long long sum=0;
        int maxm=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=v[i];
            maxm=max(maxm,v[i]);
            if(v[i]%2==1) oddCount++;
        }
        if(oddCount==0||oddCount==n) cout<<maxm;
        else cout<<sum-oddCount+1;
        cout<<endl;
    }

}