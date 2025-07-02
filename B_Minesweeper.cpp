#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; 
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m));
    vector<vector<char>> grid(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
            grid[i][j] = '0';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == '*') grid[i][j] = '*';
            if(i+1 < n && matrix[i+1][j] == '*' && matrix[i][j] != '*') grid[i][j]++;
            if(i-1 >= 0 && matrix[i-1][j] == '*' && matrix[i][j] != '*') grid[i][j]++;
            if(j+1 < m && matrix[i][j+1] == '*' && matrix[i][j] != '*') grid[i][j]++;
            if(j-1 >= 0 && matrix[i][j-1] == '*' && matrix[i][j] != '*') grid[i][j]++;
            if(i+1 < n && j+1 < m && matrix[i+1][j+1] == '*' && matrix[i][j] != '*') grid[i][j]++;
            if(i-1 >= 0 && j-1 >= 0 && matrix[i-1][j-1] == '*' && matrix[i][j] != '*') grid[i][j]++;
            if(i-1 >= 0 && j+1 < m && matrix[i-1][j+1] == '*' && matrix[i][j] != '*') grid[i][j]++;
            if(i+1 < n && j-1 >= 0 && matrix[i+1][j-1] == '*' && matrix[i][j] != '*') grid[i][j]++;
        }
    }

    string ans = "YES";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == grid[i][j]) continue;
            else if(grid[i][j] == '0' && matrix[i][j] == '.') continue;
            else{
                ans = "NO";
                break;
            }
        }
    }
    cout << ans;
}

