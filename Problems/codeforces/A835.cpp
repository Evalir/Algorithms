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
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int Vel1 = 2*(t1) + s*(v1);
    int Vel2 = 2*(t2) + s*(v2);

    if (Vel1 < Vel2) cout << "First" << endl;
    else if (Vel1 > Vel2) cout << "Second" << endl;
    else if (Vel1 == Vel2) cout << "Friendship" << endl;
}