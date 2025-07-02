#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
         cin>>v[i];
        }
        vector<int> arr(n);
        bool flag = true;
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            arr[i]=factorOfTwo(v[i]);
            ans = min(ans, arr[i]);
            if(i>0 && arr[i]!=arr[i-1]){
                flag = false;
            }
        }
        if(flag == true) cout<<4<<endl;
        else cout<<pow(2,ans+1)<<endl;

    }

}