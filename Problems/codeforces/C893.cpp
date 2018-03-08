#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
using namespace std;

struct Node {
	vector<long long> adj;
    long long identifier;
    long long cost;
	bool isVisited;
};


long long N, M;
long long totalCost = 0;
long long bestValue = 100000000000003;
vector<long long> bestVals;

void dfs(Node& current, vector<Node> &nodes) { 
    //cout << current.identifier << " with cost: " << current.cost << endl;
    if(!current.isVisited) {
        bestValue = min(bestValue, current.cost);
        current.isVisited = true;
        }
	else {
        //cout << "Already calculated weight at this node" << endl;
        bestValue = 0;
        return;
    }
    
   // cout << "bestValue: " << bestValue << " current: " << current.cost << endl;
	for (long long id : current.adj ) {
		Node &v = nodes[id];
		if (!v.isVisited) {
            dfs(v, nodes);
		}
	}

}

void dfsAll(vector<Node> &nodes) {
    for(long long i = 0; i < N; i++) {
        //cout << "To node: " << nodes[i].identifier << endl;
        dfs(nodes[i], nodes);
      //  cout << bestValue << endl;
        bestVals.push_back(bestValue);
        bestValue = 1000000000000003;
    }
}

int main() {
	cin >> N >> M;
	vector<Node> V(N); //creates all the nodes; set properties as needed.
    for(long long i = 0; i < N; i++) {
        long long x;
        cin >> x;
        //cout << "cost: "<< x << endl;
        V[i].cost = x;
        //cout << V[i].cost << endl;
    }
    for(long long i = 0; i < M; i++) {
        long long x, y;
        cin >> x >> y;
        --x, --y;
        V[x].adj.push_back(y);
        V[x].identifier = x+1;
        V[y].adj.push_back(x);
        V[y].identifier = y+1;
    }
    for (Node &n : V) {
		n.isVisited = false;
	}

    dfsAll(V);
    for(int i = 0; i < bestVals.size(); i++) {
        totalCost += bestVals[i];
    }
    cout << totalCost << endl;

	return 0;
}