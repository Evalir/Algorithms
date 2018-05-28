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

int main() {
 	int n;
 	cin >> n;
 	int dp[1010];
 	int arr[100];
 	for(int i = 0; i < n; i++)
 		cin >> arr[i];
 	//lis
 	for(int i = 0; i < n; i++) {
		dp[i] = 1;
		for(int j = 0; j < i; j++) 
			if (arr[j] < arr[i])
				dp[i] = max(dp[i],dp[j]+1);
 	}
 	int ans = 0;
 	for(int i = 0; i < n; i++)
 		ans = max(ans,dp[i]);
 	cout << ans << endl;
 	return 0;
}