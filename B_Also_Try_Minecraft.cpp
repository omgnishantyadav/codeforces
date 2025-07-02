#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<long long> a(n),pslr(n,0), psrl(n,0);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=1; i<n; i++){
        if(a[i-1]>a[i]){
            pslr[i]=(a[i-1]-a[i])+pslr[i-1];
            psrl[i]=psrl[i-1];
        }
        else {
            pslr[i]=pslr[i-1];
            psrl[i]=(a[i]-a[i-1])+psrl[i-1];
        }
    }
    while(m--){
        int s,t; cin>>s>>t;
        if(s<t) cout<<pslr[t-1]-pslr[s-1]<<endl;
        else if(s>t) cout<<psrl[s-1]-psrl[t-1]<<endl;
        else cout<<0<<endl;
        
    }
    
}