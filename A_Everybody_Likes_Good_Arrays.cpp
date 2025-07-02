#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int ans=0;
        int temp = a[0];
        for(int i=1; i<n; i++){
            if(a[i]%2==temp%2){
                ans++;
            }
            temp=a[i];
        }
        cout<<ans<<endl;
    }
}