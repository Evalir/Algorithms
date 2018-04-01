#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	char Content;
	bool isVisited;
};

int n, m;

void floodFill(int r, int c, vector<vector<Node> >& Nodes) {
 	if (r < 0 || c < 0 || r >= n || c >= m)
		return;

	if (Nodes[r][c].isVisited)
		return;
	Nodes[r][c].isVisited = true;

	if (Nodes[r][c].Content == '.')
		return;
	
	//Flood fill in 4 directions: U D L R
	floodFill(r-1, c, Nodes);
	floodFill(r+1, c, Nodes);
	floodFill(r, c-1, Nodes);
	floodFill(r, c+1, Nodes);
}

int main() {
	int T;
	int c = 1;
	cin >> T;
	while(T--) {
		int ans = 0;
		cin >> n;
		m = n;
		vector<vector<Node> > Nodes(n, vector<Node>(m));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				Nodes[i][j].isVisited = false;
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> Nodes[i][j].Content;
			}
		}
		//flood fill the entire thing
		for(int i = 0; i < n; i++) {
		 	for(int j = 0; j < m; j++) {
				if (!Nodes[i][j].isVisited && Nodes[i][j].Content == 'x') {
					ans++;
					floodFill(i,j,Nodes);
				//	cerr << "Entering flood fill on i j " << i << ' ' << j << endl;
				}
			}
		}
		cout << "Case " << c << ": " << ans << endl;
		c++;
	}
	return 0;
}