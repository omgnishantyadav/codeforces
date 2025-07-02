#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n ; cin>>n;
        string a,b; cin>>a>>b;
        int zeroOdd=0;
        int zeroEven=0;
        for(int i=0; i<n; i+=2){
            if(a[i]=='0') zeroEven++;
            if(b[i]=='0') zeroOdd++;
        }
        for(int i=1; i<n; i+=2){
            if(a[i]=='0') zeroOdd++;
            if(b[i]=='0') zeroEven++;
        }

        if(n%2==0){
            if(zeroOdd>=n/2 && zeroEven>=n/2) cout<<"YES";
            else cout<<"NO";
        }
        else{
            if(zeroOdd>=n/2 && zeroEven>n/2) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
}