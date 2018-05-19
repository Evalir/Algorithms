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
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef map<int,int> FREQ;

int arr[1000010];
int main() {
	//comment for submission
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
 	#endif
 	int n;
 	cin >> n;
 	for(int i = 0; i <= 1000000; i++) {
 		arr[i] = 0;
 	}
 	for(int i = 0; i < n; i++){
 		int x;
 		cin >> x;
 		arr[x]++;
 	}
 	//lis
 	int ans = 0;
 	int cnt = 0;
 	for(int i = 0; i <= 1000000; i++) {
 		if (arr[i] > 0) {
 			//cout << "at arr " << i << endl;
 			cnt++;
 		}
 		if (arr[i] == 0) {
 			ans = max(ans,cnt);
 			cnt = 0;
 		}
 	}

 	cout << ans << endl;
 	return 0;
}