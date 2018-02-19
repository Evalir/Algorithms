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


// bool dfsCanReach(vector<vector<int> > adjMatrix, int destination, int current, vector<bool> &adjVisited) {

//     int nOfNodes = adjMatrix.size();

//     if (adjVisited[destination]) return true;
//     else {
//         for(int i = 0; i < nOfNodes; i++) {
//             if (adjMatrix[current][i] == 1) {
//             cout << "GOING TO EDGE X Y " << current << ' ' << i << endl;
//             adjVisited[current] = true;
//             adjVisited[i] = true;
//             if (dfsCanReach(adjMatrix, destination, i, adjVisited)) {
//                 return true;
//             }
//             else
//                 return false;
//             }
//         }
//     }
//     return false;
// }

bool dfsCanReach(vector<vector<int> > adjMatrix, int destination, int current, vector<bool> &adjVisited) {

    int nOfNodes = adjMatrix.size();

    if (adjVisited[destination]) return true;
    else {
        for(int i = 0; i< nOfNodes; i++) {
            if (adjMatrix[(current)][i]) {
            cerr << "GOING TO EDGE X Y " << current << ' ' << i << " CURRENT " << adjVisited[current] << ' ' << adjVisited[i] << endl;
            adjVisited[current] = true;
            adjVisited[i] = true;
            if (dfsCanReach(adjMatrix, destination, i, adjVisited) && !adjVisited[i]) {
                return true;
            }
            else
                return false;
            }
        }
    }
    return false;
}


int main() {
    cin >> n;
    vector<vector<int> > adjMatrix (n, vector<int> (n, 0));
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
    dfsCanReach(adjMatrix, 2, 0, adjVisited);


    return 0;
}