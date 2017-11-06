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
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N;
    cin >> N;
    VI el;
    VI mem(INF, 0);

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
        mem[x]++;
    }

    int Q;
    cin >> Q;

    for(int i = 0; i < Q; i++) {
        int x;
        cin >> x;
        if(mem[x] > 0) cout << mem[x] << endl;
        else cout << "NOT PRESENT" << endl;
    }

    return 0;
}