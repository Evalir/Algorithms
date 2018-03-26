#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
//Problem URI ONLINE JUDGE - Itinerary of Santa Claus
using namespace std;

class DisjointSet {
    int N;
    int ncomp;
    vector<int> par;
    vector<int> rank;

public:
    DisjointSet(size_t _N) : N(_N), ncomp(_N), par(_N, -1), rank(_N, 0) {}
    void reset() {
        par.assign(N, -1);
        rank.assign(N, 0);
        ncomp = N;
    }
    int size() const {
      return ncomp;
    }
    int find_rep(int u) {
        // path compression
        return par[u] < 0 ? u : par[u] = find_rep(par[u]);
    }
    bool union_rep(int u, int v) {
        int u_root = find_rep(u);
        int v_root = find_rep(v);
        if (u_root == v_root)
            return false;
        if (rank[u_root] > rank[v_root])
            par[v_root] = u_root;
        else {
            par[u_root] = v_root;
            if (rank[u_root] == rank[v_root])
                rank[v_root] = rank[u_root] + 1;
        }
        --ncomp;
        return true;
    }
    bool isAcorn(int u) { //figure out if component is tree
        int u_root = find_rep(u);
        if (rank[u_root] == 0)
            return true; //is acorn
        else 
            return false; //is tree
   }
};

int main() {
    int T;
    cin >> T;    
    while (T--) {
        vector<pair<int,int> > edges;
        string eg;
        int idx = 0;
        while(true) {
            cin >> eg;
            if (eg[0] == '*')
                break;
            pair<int, int> ed;
            ed.first = eg[1] - 'A';
            ed.second = eg[3] - 'A';
            //cerr << "pushing " << ed.first << ' ' << " and " << ed.second << endl;
            edges.push_back(ed);
            idx++;
        }
        
        cin >> eg;
        int nOfNodes = 0;
        vector<int> Nodes;
        for(int i = 0; i < eg.size(); i++) {
            if (eg[i] == ',')
                continue;
                
            if (eg[i] >= 65 && eg[i] <= 90)
                nOfNodes++;
                Nodes.push_back(eg[i]-'A');
        }
        
        DisjointSet DS(nOfNodes);
        
        //union find to every pair
        for(int i = 0; i < edges.size(); i++) {
            DS.union_rep(edges[i].first, edges[i].second);
        }
        int lQueryRep = -1;
        int nTrees = 0;
        int nAcorns = 0;
        set<int> TreesRep;
        set<int> AcornsRep;
        
        for(int i = 0; i < Nodes.size(); i++) {
            //cerr << "Finding rep for node " << Nodes[i] << endl;
            int NodeRep = DS.find_rep(Nodes[i]);
            if (NodeRep != lQueryRep) {
                if (DS.isAcorn(NodeRep))
                    AcornsRep.insert(NodeRep);
                else
                    TreesRep.insert(NodeRep);
            }
            lQueryRep = NodeRep;
        }
        if (!TreesRep.empty() && !AcornsRep.empty()) {
            nTrees = TreesRep.size();
            nAcorns = AcornsRep.size();
            cout << "There are " << nTrees << " tree(s) and " << nAcorns << " acorn(s)." << endl;
        }
        else {
            if (!TreesRep.empty()) {
                nTrees = TreesRep.size();
            }
            else
                nTrees = 0;
            if (!AcornsRep.empty()) {
                nAcorns = AcornsRep.size();
            }
            else
                nAcorns = 0;
            
            cout << "There are " << nTrees << " tree(s) and " << nAcorns << " acorn(s)." << endl;
        }
        
    }

    return 0;
}
