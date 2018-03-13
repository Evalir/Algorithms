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

class SegmentTree {
	private: VI STree, A;
		int n;
		int left (int p) { return p << 1; }
		int right(int p) { return (p << 1) + 1; }

		void build(int p, int L, int R) {
			if (L == R) 
				STree[p] = L;
				else {
					build(left(p), L, (L+R)/2);
					build(right(p), (L+R)/2+1, R);
					int p1 = STree[left(p)], p2 = STree[right(p)];
					STree[p] = (A[p1] <= A[p2]) ? p1 : p2;
				}
		}

		int RMQ(int p , int L, int R, int i, int j) {
			if (i > R || j < L) return -1; //current segment outside query range
			if (L >= i && R <= j) return STree[p];

			//compute min position in left and right part of interval
			int p1 = RMQ(left(p), L, (L+R)/2, i, j);
			int p2 = RMQ(right(p), (L+R)/2 + 1, R, i, j);

			if (p1 == -1) return p2;
			if (p2 == -1) return p1;
			return (A[p1] <= A[p2]) ? p1 : p2;
		}

	public:
		SegmentTree(const VI &_A) {
			A = _A; n = (int)A.size();
			STree.assign(4 * n, 0);
			build(1, 0, n-1);
		}
		int RMQ(int i, int j) { return RMQ(1, 0, n-1, i, j);}
	};

int main(){
	printf("This is the Segment Tree Implementation from\n Competitive Programming 3.\n");
	printf("NOTE: This is a static Segment Tree, it is not dynamic.\n\n");

	//int arr[] = {18, 17, 13, 19, 15, 11, 20};
	//VI A(arr, arr + 7);
	VI A;
	for (int i = 0; i < 7; i++) {
		int x;
		cin >> x;
		A.push_back(x);
	}
	SegmentTree STree(A);

	printf("RMQ(1,3) = %d -> %d\n", STree.RMQ(1,3), A[STree.RMQ(1,3)]);
	printf("RMQ(4,6) = %d -> %d\n", STree.RMQ(4,6), A[STree.RMQ(4,6)]);
	return 0;
}