<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

int main(){
	int N, M;
	cin >> N >> M;
	int maxN;
	int mat[N][M];
	int res[N][M];

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cin >> mat[i][j];
			res[i][j] = 0;
			maxN = max(maxN, mat[i][j]);
		}
	}
	
	//solve
	for(int k = 0; k < maxN; k++) {
		for(int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				
			}
		}
	}
=======
#include <iostream>
#include <algorithm>
using namespace std;

int arr[3][3];
int state[3][3];
int main() {
	int maxrep = -1;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> arr[i][j];
			maxrep = max(maxrep, arr[i][j]);
		}
	}
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			state[i][j] = 1;
		}
	}

	for(int i = 0; i < maxrep; i++) {
		for(int a = 0; a < 3; a++) {
			for(int b = 0; b < 3; b++) {
				if (arr[a][b] > 0) {
					arr[a][b]--;
					(state[a][b] == 1) ? state[a][b] = 0 : state[a][b] = 1;
					if(a != 0)
						state[a-1][b] == 1 ? state[a-1][b] = 0 : state[a-1][b] = 1;
					if(a != 2)
						state[a+1][b] == 1 ? state[a+1][b] = 0 : state[a+1][b] = 1;
					if(b != 0)
						state[a][b-1] == 1 ? state[a][b-1] = 0 : state[a][b-1] = 1;
					if(b != 2)
						state[a][b+1] == 1 ? state[a][b+1] = 0 : state[a][b+1] = 1;
				}
			}
		}
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << state[i][j];
		}
		cout << endl;
	}

	return 0;
>>>>>>> a9e5f3cdde2c367b2f8599e274bd2e4f07067dfa
}