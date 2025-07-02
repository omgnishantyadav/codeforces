#include <bits/stdc++.h>;
using namespace std;


void solve(vector<long long>& dp){
    int l,r; cin>>l>>r;
    cout<<dp[r-1]-dp[l-1]<<endl;
}

int main(){
    int t; cin>>t;
    int n=1e9;
    vector<long long> v(n+1),dp(n+1);
    v[1]=dp[1]=1;
    vector<int> prev(10,0),curr(10,0);
    prev[10]=1;
    for(int i=2; i<=n; i++){
        int num=i;
        int cnt=10;
        while(num>0){
            curr[cnt]=num%10;
            num/=10;
            if(curr[cnt]==prev[cnt])v[i]++;
            cnt--;
        }
        prev=curr;
        prev.clear()
        dp[i]=dp[i-1]+v[i];
    }

    while(t--){
        solve(dp);
    }
}