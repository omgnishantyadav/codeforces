#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        long long ans=0;
        int even = 0;
        int odd = 0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0) even++;
            else odd++;
            ans+=a[i];
        }

        for(int i=0; i<q; i++){
            int a,b; cin>>a>>b;
            if(a==0){
                ans+=(b*even);
                if(b%2==1){
                    odd+=even;
                    even=0;
                }
            }
            else {
                ans+=(b*odd);
                if(b%2==1){
                    even+=odd;
                    odd=0;
                }
            }
            cout<<ans<<endl;
        }
        
    }
}