#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1e9+7;
using namespace std;

struct Node {
	bool isVisited = false;
	vector<int> adj;
	int id;
	long long gold;
};

long long total = 0;
long long mincost = INF;

void dfs(Node& Current, vector<Node>& Nodes) {
	Current.isVisited = true;
	mincost = min(mincost, Current.gold);
	//chequear todos los vecinos
	for(int id : Current.adj) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
			dfs(v, Nodes);
		}
	}

	return;
}

void dfsAll(vector<Node>& Nodes, int& N) {
	for(int i = 0; i < N; i++) {
		if (!Nodes[i].isVisited) {
			dfs(Nodes[i], Nodes);
			total += mincost;
			mincost = INF;
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<Node> Nodes(N);
	for(int i = 0; i < N; i++) {
		long long c;
		//cerr << "getting gold " << i << endl;
		cin >> c;
		Nodes[i].gold = c;
	}

	for(int i = 0; i < M; i++) {
		//cerr << "reading edges " << endl;
		int x, y;
		cin >> x >> y;
		x--, y--;
		//si es directed, solo dejar Nodes[x]
		Nodes[x].adj.push_back(y);
		Nodes[x].id = x+1; // poner id en 1-based indexing
		Nodes[y].adj.push_back(x);
		Nodes[y].id = y+1;
	}

	dfsAll(Nodes, N);

	cout << total << endl;

}