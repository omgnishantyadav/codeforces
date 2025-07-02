#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> grid(n, vector<int>(n));
        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>grid[i][j];
                if(i==0) sum+=grid[i][j];
                if(i==n-1 && j>0) sum+=grid[i][j];
            }
        }
        cout<<(2*n+1)*n-sum<<" ";
        for(int i=0; i<n; i++){
            cout<<grid[0][i]<<" ";
        }
        for(int i=1; i<n; i++){
            cout<<grid[n-1][i]<<" ";
        }
        cout<<endl;

    }
}