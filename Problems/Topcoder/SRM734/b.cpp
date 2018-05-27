#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

class TheSquareCityDiv2 {
public:
	vector<int> find(int r, vector<int> t) {
		vector<int> ans;
		int grid[50][50];
		int gsize = sqrt(t.size());
		for(int i = 0; i < gsize; i++) {
			for(int j = 0; j < gsize; j++) {
				grid[i][j] = 1;
			}
		}
		bool move = true;
		for(int l = 0; l < 40; l++) {
			for(int i = 0 ; i < t.size(); i++) {
				int x = (1.00 * ceil(i/gsize)) * 1LL;
				int y = i % gsize;
				cerr << "x y " << x << ' ' << y << endl;
				int curr_max = t[i];
				int a = (1.00 * ceil(i/gsize)) * 1LL;
				int b = i % gsize;
				for(int j = 0; j < t.size(); j++) {
					if (i != j && grid[i][j] > 0) {
						if (curr_max < t[j]) {
							a = (1.00 * ceil(j/gsize))  * 1LL;
							b = j % gsize;
							if (abs(x-a)+abs(y-b) <= r) {
								move = true;
								curr_max = t[j];
								a = (1.00 * ceil(j/gsize))  * 1LL;
								b = j % gsize;
								cout << "a b " << a << ' ' << b << endl;
							}
						}
					}
				}
				grid[x][y]--,grid[a][b]++;
			}
		}
		int no1 = 0, big = 0;
		for(int i = 0; i < gsize; i++) {
			for(int j = 0; j < gsize; j++) {
				if (grid[i][j] == 1)
					no1++;
				big = max(big,grid[i][j]);
			}
		}
		ans.push_back(no1);
		ans.push_back(big);
		return ans;
	}
};

int main() {
	vector<int> V;
	vector<int> k = { 9, 1, 6, 5, 3, 2, 7, 4, 8 };
	TheSquareCityDiv2 T;
	V = T.find(1 , k);
	for(int i = 0; i < V.size(); i++) {
		cout << V[i] << endl;
	}
	return 0;
}
