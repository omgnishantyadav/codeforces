#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int right=0;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==2)right++;
        }
        
        int ans=-1;
        if(right==0) ans=1;
        int  left=0;
        for(int i=0; i<n; i++){
            if(a[i]==2){
                left++;
                right--;
                if(left==right){
                    ans=i+1;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}