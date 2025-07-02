#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; int k;
    cin>>n>>k;
    int len = n.size();
    
    int zeroCount=0;
    for(int i=0; i<len; i++){
        if(n[i]=='0') zeroCount++;
    }

    
    if(zeroCount<k){
        cout<<len-1;
        return 0;
    }

    int zero=0;
    for(int i=len-1; i>=0; i--){
        if(n[i]=='0') zero++;
        if(zero==k){
            cout<<(len-i-zero);
            break;
        }
    }

}