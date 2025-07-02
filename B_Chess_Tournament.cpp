#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t>0){
        t--;
        string s; cin >> s;

        int n = s.size();
        vector<vector<char>> matrix(n, vector<char>(n, '-1'));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) matrix[i][j] = 'X';
                
            }

    }
}