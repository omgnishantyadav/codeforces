#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t>0){
        t--;
        int n,x; cin >> n>>x;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int ans=0;
        int j=1;
        for(int i=0; i<n; i++){
            if(a[i]*j>=x){
                ans++;
                j=1;
            }
            else j++;
        }
        cout<<ans<<endl;
    }
}