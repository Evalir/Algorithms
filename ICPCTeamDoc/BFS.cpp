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
        
        for(int& k : V.adj) {
       // cerr << V.identifier << ": checking node " << k << endl;
            if (Nodes[k].isVisited == false) {
                Nodes[k].isVisited = true;
                Q.push(Nodes[k]);
                cerr << "Pushed node " << k << endl;
            }
        }
    }
}