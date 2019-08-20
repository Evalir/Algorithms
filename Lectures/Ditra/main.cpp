#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to, weight;
};

int N, M;  // cantidad de nodos y cantidad de edges
vector<vector<Edge>> adj;

struct State {
    int node_id;
    int dist;
    bool operator<(const State& s) const {
        if (dist > s.dist)
            return true;
        else
            return false;
    }
};

vector<int> ditra(int src) {
    const int INF = 1 << 30;
    vector<int> D(N, INF);
    priority_queue<State> PQ;
    D[src] = 0;
    PQ.push({ src, 0 });
    while (!PQ.empty()) {
        State cur = PQ.top();
        PQ.pop();
        int u = cur.node_id;
        int dist = cur.dist;
        if (dist > D[u])
            continue;
        for (Edge e : adj[u]) {
            State nxt = { e.to, dist + e.weight };
            if (D[nxt.node_id] > nxt.dist) {
                D[nxt.node_id] = nxt.dist;
                PQ.push(nxt);
            }
        }
    }

    return D;
}

int main() {
    cin >> N >> M;
    adj = vector< vector<Edge> >(N);
    for (int j = 0; j < M; ++j) {
        int u, v, weight;
        cin >> u >> v >> weight;
        // asumiendo que u y v son 0-based y el grafo no es directed
        adj[u].push_back( {v, weight} );
        adj[v].push_back( {u, weight} );  // omitir esta linea si el grafo que es directed
    }

    return 0;
}
