#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <queue>
#define INF 1e9+7
using namespace std;
vector<int> Nodes[1000];
vector<int> d(1000, INF);

void bfs(int u) {
    queue<int> q;
    q.push(u);

    while(!q.empty()) {
        int v = q.front();
        q.pop();
        cerr << "for layer " << v << endl;
        for(int i = 0; i < (int)Nodes[v].size(); i++) {
            if (d[Nodes[v][i]] == INF) {
                d[Nodes[v][i]] = d[v] + 1;
                q.push(Nodes[v][i]);
                cerr << "vis : " << Nodes[v][i] << " with new dist " << d[Nodes[v][i]] <<endl;
            }
        }

    }

}

int main() {

   Nodes[0].push_back(1);
   Nodes[0].push_back(2);
   Nodes[0].push_back(3);
   Nodes[1].push_back(3);
   Nodes[1].push_back(4);
   Nodes[4].push_back(5);
   Nodes[3].push_back(1);
   Nodes[6].push_back(7);
   Nodes[7].push_back(8);
   Nodes[7].push_back(9);
   Nodes[9].push_back(7);
   
    int n, m, v;
    for(int i = 0; i < 10; i++) {
        cout << "Adj list for " << i << endl;
        for(auto k : Nodes[i]) {
            cout << k << ' ';
        }
        cout << endl;
    }
    
    
    int ncomp = 0;
    
    for(int i = 0; i < 10; i++) {
        if(d[i] == INF) {
            ncomp++;
            cerr << "CALL BFS" << endl << endl;
            d[i] = 0;
            bfs(i);
        }
    }
    for(int i = 0; i < 10; i++) {
        cout << "Dist Node " << i << " : " << d[i] << endl;
    }
    cout << ncomp << endl;
}
