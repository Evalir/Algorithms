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
    int T;
    cin >> T;
    int counter = 0;
    for(int i = 0; i < T; i++) {
        counter++;
        int N;
        cin >> N;
        int walls[N+10];
        for(int i = 0; i < N; i++) {
            cin >> walls[i];
        }
        int ch = 0;
        int cl = 0;
        for(int i = 0; i < N - 1; i++) {
            if (walls[i] < walls[i+1]) ch++;
            else if (walls[i] > walls[i+1]) cl++;
        }

        cout << "Case " << counter << ": " << ch << " " << cl << endl;
    }

    return 0;
}