#include <iostream>
#include <vector>
using namespace std;

int dfs(int node, vector<vector<int>>& adj) {
    int maxDepth = 0;

    for (int child : adj[node]) {
        maxDepth = max(maxDepth, dfs(child, adj));
    }

    return 1 + maxDepth;  // 1 for current level
}

int main() {
    int n;
    cin >> n;  // no of employe

    vector<vector<int>> adj(n + 1);
    int root = -1;

    for (int i = 1; i <= n; i++) {
        int manager;
        cin >> manager;  // manager of employee i

        if (manager == -1) {
            root = i;  // CEO
        } else {
            adj[manager].push_back(i);
        }
    }

    cout << dfs(root, adj);

    return 0;
}