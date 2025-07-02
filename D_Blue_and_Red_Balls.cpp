#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

long long nCr(int n, int r) {
    if (r > n - r)
        r = n - r;

    long double result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i)%MOD;
        result /= (i + 1);
    }
    return result;
}

int main(){
    int n,k; cin>>n>>k;
    vector<int> dp(k+1,0);
    vector<int> pSum(k+1,0);
    for(int i=1; i<=k; i++){
        dp[i]=nCr(n-k+i,i)-pSum[i-1];
        pSum[i]=pSum[i-1]+dp[i];
        cout<<dp[i]<<endl;

    }
}