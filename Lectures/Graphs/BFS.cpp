#include <bits/stdc++.h>
using namespace std;

struct Node {
    vector<int> adj;
    int identifier;
    bool isVisited = false;
};

void BFS(Node& Start, vector<Node>& Nodes) {
        
    Start.isVisited = true;
    queue<Node> Q;
    Q.push(Start);
    while(!Q.empty()) {
        
        Node V = Q.front();
        Q.pop();
        
        for(int k : V.adj) {
       // cerr << V.identifier << ": checking node " << k << endl;
            if (Nodes[k].isVisited == false) {
                Nodes[k].isVisited = true;
                Q.push(Nodes[k]);
               // cerr << "Pushed node " << Nodes[k].identifier << endl;
            }
        }
    }
}

int main() {

   vector<Node> Nodes(10);
   Nodes[0].adj.push_back(1);
   Nodes[0].adj.push_back(2);
   Nodes[0].adj.push_back(3);
   Nodes[1].adj.push_back(3);
   Nodes[1].adj.push_back(4);
   Nodes[4].adj.push_back(5);
   Nodes[3].adj.push_back(1);
   Nodes[6].adj.push_back(7);
   Nodes[7].adj.push_back(8);
   Nodes[7].adj.push_back(9);
   Nodes[9].adj.push_back(7);
   
    int n, m, v;
    for(int i = 0; i < 10; i++) {
        cout << "Adj list for " << i << endl;
        for(auto k : Nodes[i].adj) {
            cout << k << ' ';
        }
        cout << endl;
    }
    
    
    int ncomp = 0;
    
    for(int i = 0; i < 10; i++) {
        if(!Nodes[i].isVisited) {
            ncomp++;
            BFS(Nodes[i], Nodes);
        }
    }
    cout << ncomp << endl;
}
