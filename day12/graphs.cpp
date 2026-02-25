#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);   
}

//BFS
void bfs(vector<int> adj[], int start, int N) {

    vector<bool> visited(N, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int neighbor : adj[node]) {
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

//DFS
void dfs(vector<int> adj[], int node, vector<bool>& visited) {  
    visited[node] = true;
    cout << node << " ";

    for(int neighbor : adj[node]) {
        if(!visited[neighbor]) {
            dfs(adj, neighbor, visited);
        }
    }
}

void print(vector<int> adj[], int N){

    for(int i =0 ;i<N;i++){
        cout << i << "-> ";

        for(int ele : adj[i]){
            cout << ele << " ";
        }
        cout << endl;

    }


}

int main() {
    int N = 4;
    vector<int> adj[N];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);

    vector<bool> visited(N, false);

    cout << "Graph: \n";
    print(adj,N);

    cout << "DFS Traversal: ";
    dfs(adj, 0, visited);
    cout << endl;

    cout << "BFS Traversal: ";
    bfs(adj,0,N);

}