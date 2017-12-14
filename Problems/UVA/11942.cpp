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
    vector<string> state;
    for(int i = 0; i < N; i++) {
        int beards[12];
        for(int i = 0; i < 10; i++) {
            cin >> beards[i];
        }

        bool ordered = 0;
        //ascending
        for(int i = 0; i < 9; i++) {
            if (beards[i] < beards[i+1]) {
                ordered = 1;
                }
            else {
                ordered = 0;
                break;
            }
        }
        //descending
        if (ordered == 0){
            for(int i = 0; i < 9; i++) {
                if (beards[i] > beards[i+1]) {
                    ordered = 1;
                }
                else {
                    ordered = 0;
                    break;
                }
            }
        }

        if (ordered == 1) state.pb("Ordered");
        else state.pb("Unordered");
    }

    cout << "Lumberjacks:" << endl;
    for (auto x : state) {
        cout << x << endl;
    }
    return 0;
}

/*

3
13 25 39 40 55 62 68 77 88 95
88 62 77 20 40 10 99 56 45 36
91 78 61 59 54 49 43 33 26 18
*/