#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int temp = min(n,m);
    n=max(n,m);
    m=temp;
    int arr[5];
    int k2=m%5;
    long long sum=0;
    int k1=n%5;
    int extra=0;
    for(int i=0; i<5; i++){
        arr[i]=m/5;
        if(k2>0) {
            arr[i]++;
            k2--;
        }
        sum+=arr[i];
    }

    for(int i=3; i>=0; i--){
        if(k1>0){
            extra+=arr[i];
            k1--;
        }
    }

    cout<<(n/5)*sum+extra;
}