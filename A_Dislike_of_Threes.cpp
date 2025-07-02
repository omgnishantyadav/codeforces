#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>& dp){
    int i=1;
    int cnt=0;
    while(cnt<1000){
        if(!(i%3==0 || i%10==3)){
            dp[cnt]=i;
            cnt++;
        }
        i++;
    }
    return;
}

int main() {
    int t;
    cin >> t;
    vector<int> dp(1000);
    fun(dp);
    while(t>0){
        t--;
        int k; cin>>k;
        cout<<dp[k-1]<<endl;
    }
}