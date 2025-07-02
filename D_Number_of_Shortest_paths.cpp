#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> dist(n + 1, -1);
    vector<long long> dp(n + 1, 0);

    queue<int> q;

    dist[1] = 0;
    dp[1] = 1;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            if(dist[v] == -1) {
                dist[v] = dist[u] + 1;
                dp[v] = dp[u];
                q.push(v);
            }
            else if (dist[v] == dist[u] + 1) {
                dp[v] = (dp[v] + dp[u]) % mod;
            }
        }
    }

    cout << dp[n] % mod << endl;

    return 0;
}