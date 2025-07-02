#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;

int main(){
    int n,k; cin>>n>>k;
    vector<vector<int>> dp(k+1, vector<int> (n+1,0));
    //State Definition: dp[i][j] represents the number of sequences of length i that end with the number j.
   //Base Case: For sequences of length 1, each sequence is just a single number j. Hence, dp[1][j] = 1 for all j from 1 to n.
   
    for(int j=1; j<=n; j++){
        dp[1][j]=1;
    }
    for(int i=1; i<k; i++){
        for(int j=1; j<=n; j++){
            if(dp[i][j]>0){
                for(int m=j; m<=n; m+=j){
                    dp[i+1][m]=(dp[i+1][m])+dp[i][j]%MOD;
                }
            }
        }
    }
    int ans=0;
    for(int j=1; j<=n; j++){
        ans+=dp[k][j]%MOD;
    }
    cout<<ans;
}