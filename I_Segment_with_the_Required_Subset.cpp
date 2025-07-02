#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n,s; cin>>n>>s;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ans=-1;
    
    int i=0, j=0;
    int sum=0;
    int minAns=INT_MAX;
    while(j<n){
        if(sum==s){
            ans=j-i+1;
            minAn;
            ans=0;
        }
        else if(sum>s){
            sum-=v[i];
            i++;
        }
        else{
            sum+=v[j];
            j++;
        }
    }
    cout<<ans;

}