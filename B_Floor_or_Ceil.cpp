#include <bits/stdc++.h>
using namespace std;

long long minValue(long long x, long long n, long long m){
    while(n>0 || m>0){
        if(x%2!=0){
            if(n>0){
                n--;
                x=x/2;
            }
            else{
                m--;
                x=(x+1)/2;
           }
        }
        else{
            if(m>0){
                m--;
                x=x/2;
            }
            else{
                n--;
                x=x/2;
            }
        }
    }
    return x;
}

long long maxValue(long long x, long long n, long long m){
    while(n>0 || m>0){
        if(x%2==0){
            if(n>0){
                n--;
                x=x/2;
            }
            else{
                m--;
                x=x/2;
           }
        }
        else{
            if(m>0){
                m--;
                x=(x+1)/2;
            }
            else{
                n--;
                x=x/2;
            }
        }
    }
    return x;
}

int main(){
    int t; cin >> t;
    while(t){
        t--;
        long long x,n,m; cin >> x >> n >> m;
        cout<<minValue(x,n,m)<<" ";
        cout<<maxValue(x,n,m)<<endl;
    }
}