#include <bits/stdc++.h>
using namespace std;

bool isPerfectSq(long long n){
    int x=pow(n,0.5);
    return x==pow(n,0.5);
}

int main(){
    long long n; cin>>n;
    if(n<3){
        cout<<-1<<endl;
        return 0;
    }
    if(n%2==0){
        long long m=n/2;
        cout<<m*m-1<<" "<<m*m+1<<endl;
    }
    
    else{
        cout<<(n*n)/2<<" "<<(n*n)/2+1<<endl;
    }
}
