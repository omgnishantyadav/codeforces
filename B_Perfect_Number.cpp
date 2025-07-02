#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum==10) return true;
    return false;
}
int main(){
    int k; cin >> k;
    int i=10;
    while(k>0){
        if(isPerfect(i)==true){
            k--;
        }
        i++;
    }
    cout<<i-1;
    return 0;
}