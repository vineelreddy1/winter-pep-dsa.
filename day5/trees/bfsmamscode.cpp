#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int startNode,const vector<vector<int>>&adj){
    int n=adj.size();
    vector<bool>visited(n,false);
    queue<int>q;
    visited[startNode]=true;
    q.push(startNode);

    cout<<"BFS Traversal: ";
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbor:adj[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
}
int main(){
    int n=6; // number of nodes
    vector<vector<int>>adj(n);
    // adding edges to the graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[2].push_back(4);
    adj[3].push_back(1);
    adj[3].push_back(5);
    adj[4].push_back(2);
    adj[4].push_back(5);
    adj[5].push_back(3);
    adj[5].push_back(4);

    bfs(0,adj); // starting BFS from node 0
    return 0;
}
