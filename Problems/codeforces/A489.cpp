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
    int N;
    cin >> N;
    VI el;
    int count = 0;
    vector<pair<int, int> > swaps;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.pb(x);
    }

    //bubble sort N^2
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-i-1; j++) {
            if (el[j] > el[j+1]) {
                count++;
                ii sw;
                sw.first = j;
                sw.second = j+1;
                swaps.pb(sw);
                int temp = el[j];
                el[j] = el[j+1];
                el[j+1] = temp;
            }
        }
    }

    if (count > 0) {
        cout << count << endl;
        for(int i = 0; i < swaps.size(); i++) {
            cout << swaps[i].first << " " << swaps[i].second << endl;
        }
    }

    return 0;
}