#include <bits/stdc++.h>
using namespace std;

int main(){
    double n; cin>>n;
    vector<int> v(n);
    int fiveCount=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==5)fiveCount++;
    }
    sort(v,v+n);

    double num = 4.5*n;
    int temp = num-fiveCount;
    
    cout<<max(0,temp);
}