#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        long double even=0,odd=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(i%2) even+=v[i];
            else odd+=v[i];
        }
        string ans="NO";
        int e = n/2;
        int o = (n+1)/2;
        even/=e;
        odd/=o;
        if(even==floor(even) && odd==floor(odd) && even==odd) ans="YES";
        cout<<ans<<endl;
        
        

    }
}