#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int factor=0;
    int i=1;
    while(i<=n){
        if(n%i==0){
            factor++;
        }
        i++;
    }
    if(factor==2) return true;
    else return false;
}

int main(){
    int x; cin>>x;
    int i=x;
    while(true){
        if(isPrime(i)==true){
            break;
        }
        i++;
    }
    cout<<i;
}