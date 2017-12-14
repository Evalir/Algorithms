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
    int N, M;
    cin >> N >> M;
    int steps = 1;
    int climbed = 0;
    int ans = INF;
    bool br  = 0;
    //alternate
    //choose 1
    int count = 0;
    while(steps <= N && steps % M != 0) {
        count++;
        cout << "IT " << count << endl;
        steps++;
        climbed++;
        int a = steps;
        int b = climbed;
        if (steps % M == 0 && climbed == N) ans = min(ans, steps);
        //choose 2
        while(a <= N && a % M != 0) {
            a++;
            b += 2;
            if (a % M == 0 && b == N) {
                ans = min(ans, a);
                br = 1;
                break;
                }
        }

        if (br == 1) break;
    }

    cout << ans << endl;

}

//choose only 1
    // while (steps <= N && steps % M != 0) {
    //     steps++;
    //     climbed++;
    //     if (steps % M == 0 && climbed == N) ans = min(ans, steps);
    // }
    // climbed = 0;
    // steps = 1;
    // //choose only two
    // while(steps <= N && steps % M != 0) {
    //     steps++;
    //     climbed += 2;
    //     if (steps % M == 0 && climbed == N) ans = min(ans, steps);
    // }
    // climbed = 0;
    // steps = 1;