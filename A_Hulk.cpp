#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string ans ="";
    for(int i=1; i<n; i++){
        if(i%2==1) ans+="I hate that ";
        else ans+="I love that ";
    }
    if(n%2==1) ans+="I hate it";
    else ans+="I love it";
    cout<<ans;
}