#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node {
	pair<int, int> identifier;
	char content;
	bool isVisited = false;
};

int N, M;
bool hasCycle = false;

void floodFill(int r, int c, int& N, int& M, vector< vector<Node> >& Matrix, Node Parent, int Case) {

	if (r < 0 || r >= N || r < 0 || c >= M) 
		return;
		
	
	//if it's not the letter we're currently finding a cycle on.
	if (Parent.content != Matrix[r][c].content) {
		cerr << "Letters diff: " << Parent.content << ' ' << Matrix[r][c].content << " Case: " << Case << endl;
		return;
	}
	
		//if pickedletter = currentletter and is visited
	if (Parent.content == Matrix[r][c].content && Matrix[r][c].isVisited && Parent.identifier.first != r && Parent.identifier.second != c) {
		hasCycle = true;
		cout << "Found cycle on " << r << ' ' << c << endl;
		return;
	}

	if (Matrix[r][c].isVisited)
		return;
	else	
		Matrix[r][c].isVisited = true;
	
	cout << "On i: " << r << " j: " << c << endl;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if (i == r && j == c)
				cout << '@';
			else
				cout << Matrix[i][j].content;
		}
		cout << endl;
	}


	Node n = Matrix[r][c];
	
	floodFill(r, c+1, N, M, Matrix, n, 1);
	floodFill(r, c-1, N, M, Matrix, n, 2);
	floodFill(r+1, c, N, M, Matrix, n, 3);
	floodFill(r-1, c, N, M, Matrix, n, 4);
}

int main() {
	
	cin >> N >> M;
	vector< vector<Node> > Matrix(N, vector<Node>(M));

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cin >> Matrix[i][j].content;
			pair<int, int> P;
			P.first = i;
			P.second = j;
			Matrix[i][j].identifier = P;
		}
	}
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			Node n;
			pair<int, int> P;
			P.first = i;
			P.second = j;
			n.identifier = P;
			n.content = Matrix[i][j].content;
			floodFill(i , j, N, M, Matrix, n, 0);
		}
	}


	cout << endl;
	if (hasCycle)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

/*
 3 4
AAAA
ABCA
AAAA

 * */
