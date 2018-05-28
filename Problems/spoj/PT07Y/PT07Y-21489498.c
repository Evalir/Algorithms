#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Node {
    vector<int> adj;
    bool isVisited;
    int id = -1;
};

bool cycled = 0;

void dfs(Node& Current, vector<Node>& Nodes, Node& Parent) {
    Current.isVisited = true;

    for(int id : Current.adj) {
        Node& v = Nodes[id];
        if(!v.isVisited && v.id != Parent.id) {
            //cerr << v.id << ' ' << Parent.id << endl;
            dfs(v, Nodes, Current);
        }
        else if (v.isVisited && v.id != Parent.id) {
            cycled = 1;
            return;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    if (n != m+1) {
        cout << "NO" << endl;
        return 0;
    }

    vector<Node> Nodes(n);
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--,y--;
        Nodes[x].adj.push_back(y);
        Nodes[x].id = x;
        Nodes[y].adj.push_back(x);
        Nodes[y].id = y;
    }

    dfs(Nodes[0], Nodes, Nodes[0]);

    for(int i = 0; i < n; i++) {
        if (!Nodes[i].isVisited) {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (cycled)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}

