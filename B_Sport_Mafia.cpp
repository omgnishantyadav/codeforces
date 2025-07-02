#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int eat=0;
    int candies=0;
    int i=1;

    while(n){
        if(candies<k){
            candies+=i;
            i++;
        }
        else{
            candies--;
            eat++;
        }
        n--;
    }
    cout<<eat;
}