#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N = 10000, M = 1000;
int components = 0;

struct Node {
	char content;
	bool visited;
};

void floodFill(int r, int c, vector< vector <Node> > & Land) {
	if (r < 0 || r >= N || r < 0 || c >= M) //if out of range
		return;
		
	if (Land[r][c].visited)
		return;
	
	//Not visited, keep on
	Land[r][c].visited = true;
		
	if (Land[r][c].content != '@') //@ -> TARGET CELL
		return;
	
	//call flood fill recursively in all cardinal directions
	floodFill(r-1, c, Land);
	floodFill(r, c-1, Land);
	floodFill(r+1, c, Land);
	floodFill(r, c+1, Land);
	floodFill(r+1, c+1, Land);
	floodFill(r-1, c-1, Land);		
	floodFill(r+1, c-1, Land);
	floodFill(r-1, c+1, Land);
}

//Traverses the entire graph looking for connected components
void floodAll(vector< vector<Node> >& Land, int N, int M) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if (!Land[i][j].visited && Land[i][j].content != '*') {
				floodFill(i,j, Land);
				components++;
			}
		}
	}
}

int main() {
	while(true) {
		
		cin >> N >> M;
		if (N == 0 || M == 0)
			break;
			
		vector< vector <Node> > Land(N, vector<Node> (M));
	
		for(int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> Land[i][j].content;
				Land[i][j].visited = false;		
			}
		}
	
		floodAll(Land, N, M);
	
		cout << components << endl;
	
	}
	return 0;
}
