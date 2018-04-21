#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>
using namespace std;

int N, M;
bool hasCycle = 0;
struct Node {
	char content;
    pair<int, int> identifier;
	bool visited;
};

void floodFill(int r, int c, vector< vector <Node> > & Land, Node& Parent, char PickedLetter) {
	if (r < 0 || r >= N || c < 0 || c >= M) //if out of range
		return;
		
    if (Land[r][c].content != PickedLetter)
		return;
        
	if (Land[r][c].visited && ((Parent.identifier.first == r && Parent.identifier.second != c ) || (Parent.identifier.first != r && Parent.identifier.second == c)) && Parent.content == Land[r][c].content) {
        cout << "Found cycle on" << r << ' ' << c << endl;
        hasCycle = true;
        return;
    }
    
	Land[r][c].visited = true;
    cout << endl;
    cout << "on " << r << ' ' << c << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if (i == r && j == c)
                cout << '@';
            else
                cout << Land[i][j].content;
        }
        cout << endl;
    }
		
	
	//call flood fill recursively in all cardinal directions
	floodFill(r-1, c, Land, Land[r][c], PickedLetter);
	floodFill(r, c-1, Land, Land[r][c], PickedLetter);
	floodFill(r+1, c, Land, Land[r][c], PickedLetter);
	floodFill(r, c+1, Land, Land[r][c], PickedLetter);
}

//Traverses the entire graph looking for connected components
void floodAll(vector< vector<Node> >& Land, int N, int M) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if (!Land[i][j].visited && Land[i][j].content != '*') {
				floodFill(i,j, Land, Land[i][j], Land[i][j].content);
			}
		}
	}
}

int main() {
	cin >> N >> M;
    vector<vector<Node> > V(N, vector<Node>(M));
    for(int i = 0; i < N; i++) {
        for(int j =0; j < M; j++) {
            cin >> V[i][j].content;
            V[i][j].identifier.first = i;
            V[i][j].identifier.second = j;
        }
    }
    
    floodAll(V, N, M);
    
    if (hasCycle)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
	return 0;
}
