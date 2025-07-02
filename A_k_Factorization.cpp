#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    int temp=k;
    vector<int> v;
    int i=2;
    while(i<=n){
        if(k==1){
            v.push_back(n);
            break;
        }

        if(n%i==0) {
            n/=i;
            v.push_back(i);
            i--;
            k--;
        }
        i++;
    }
    if(temp!=v.size()){
        cout<<-1;
        return 0;
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}