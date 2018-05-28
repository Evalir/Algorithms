#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9
#define MAX (int)1e7
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N, M; //vars to read
    cin >> N >> M; //read
    bool lr = false; //if false, left to right dots, else, right to left dots

    char nsign = '#';
    char d = '.';

    for(int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            for(int j = 0; j < M; j++) {
                cout << nsign;
            }
            cout << endl;
        }
        else {
            if (lr == false) {
                for (int j = 0; j < M - 1; j++) {
                    cout << d;
                }
                cout << nsign << endl;
                lr = true;
            }
            else if (lr == true) {
                cout << nsign;
                for (int j = 0; j < M - 1; j++) {
                    cout << d;
                }
                cout << endl;
                lr = false;
            }
        }
    }
 
    return 0;
}