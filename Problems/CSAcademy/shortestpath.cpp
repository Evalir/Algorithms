#include <bits/stdc++.h>
using namespace std;

struct Node {
    vector<int> adj;
    int identifier;
    bool isVisited = false;
    int dist = -1;
};

void BFS(Node& Start, vector<Node>& Nodes) {
    Start.isVisited = true;
    Start.dist = 0;
    queue<Node> Q;
    Q.push(Start);
    while(!Q.empty()) {
        
        Node V = Q.front();
        Q.pop();
        //cerr << V.identifier << " has dist " << V.dist << endl;
        for(int k : V.adj) {
        //cerr << V.identifier << ": checking node " << k << endl;
            if (Nodes[k].isVisited == false) {
                Nodes[k].isVisited = true;
                Nodes[k].dist = V.dist + 1;
                Q.push(Nodes[k]);
            }
        }
    }
}

int main() {
    int N, M, V;
    cin >> N >> M >> V;
    vector<Node> Nodes(N);
    for(int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        Nodes[x].adj.push_back(y);
        Nodes[x].identifier = x;
        Nodes[y].identifier = y;
    }
    V--;
    BFS(Nodes[V], Nodes);
   
    for(int i = 0; i < N; i++) {
        cout << Nodes[i].dist << ' ';
    }
    cout << endl;
    
    return 0;


}


