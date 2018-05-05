#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int n;

void printGraph(vector<vector<int> > graph) {
    for(int i = 0; i < graph.size(); i++) {
        for(int j = 0; j < graph.size(); j++) {
            cout << graph[i][j] << ' ';
        }
        cout << endl;
    }
}


bool dfsCanReach(vector<vector<int> > &adjMatrix, int destination, int current, vector<bool> &adjVisited) {
	int nOfNodes = adjMatrix.size();
	adjVisited[current] = true;

	for (int i = 0; i < nOfNodes; i++) {
		if (adjMatrix[(current)][i] && !adjVisited[i]) {
            //For debugging purposes
			cerr << "GOING TO EDGE X Y " << current << ' ' << i << endl;
			if (dfsCanReach(adjMatrix, destination, i, adjVisited)
					&& !adjVisited[i]) {
				return true;
			} 
            else
				return false;
		}
	}
	return false;
}

int main() {
    cin >> n;
    vector<vector<int> > adjMatrix (n+1, vector<int> (n+1, 0));
    vector<bool> adjVisited(n, 0);

    for(int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        adjMatrix[x][y] = 1;
        adjMatrix[y][x] = 1; 
    }

    printGraph(adjMatrix);
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    dfsCanReach(adjMatrix, y, x, adjVisited);


    return 0;
}