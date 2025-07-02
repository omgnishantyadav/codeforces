#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int i=1;
    int factor=0;
    while(i<=n){
        if(n%i==0)factor++;
        i++;
    }
    if(factor==2) return true;
    return false;
}

int main(){
    int t; cin>>t;
    while(t--){
        long long x,y; cin>>x>>y;
        long long n = x-y;

        string ans = "NO";
        int i=2;
        while(i<=x-y){
            if(isPrime(i)==true){
                if((x-y)%i==0){
                    ans="YES";
                    break;
                }
                i++;
            }
        }
        cout<<ans<<endl;
    }
    
}