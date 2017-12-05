#include <iostream>

#include <vector>

using namespace std;

// adjacency list
typedef vector<int> VI;
typedef vector<VI> VVI;

VVI adj;
VI vis;
int dfs(int u) {
//	cerr << "u: " << u << endl;
    int res = 1;
    vis[u] = 1;
    for (int v : adj[u]) {
        if (vis[v]) continue;
        res += dfs(v);
    }
    return res;
}

int main() {
	string s;
    int N, M;
    bool startedSolving = false;
	while(cin >> s){
		if(s.length() == 1){
			if(startedSolving){
				int ncomp = 0;
				vis = VI(N+1, 0);
				for (int u = 0; u < N+1; ++u) {
					if (!vis[u]) {
						int compsz = dfs(u);
						ncomp++;
//						cerr << "Componente #" << ncomp << " tiene " << compsz << " nodos" << endl;
					}
				}
				cout << ncomp << endl;
			}
			N = s[0] - 'A';
//			cerr <<  "N+1: "<< N+1 << endl;
			adj = VVI(N+1);
			startedSolving = true;
		}else{
			int u = s[0] - 'A';
			int v = s[1] - 'A';
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	int ncomp = 0;
	vis = VI(N+1, 0);
	for (int u = 0; u < N+1; ++u) {
		//cout << "u: " << u << endl;
		if (!vis[u]) {
			int compsz = dfs(u);
			ncomp++;
			//cerr << "u: " << u << endl;
//			cerr << "Componente #" << ncomp << " tiene " << compsz << " nodos" << endl;
		}
	}
//	cerr << "vis size: " <<   vis.size() << endl;
	cout << ncomp << endl;

    return 0;
}



/*
E
AB
CE
DB
B
AB
C
 */
