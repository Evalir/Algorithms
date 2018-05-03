#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >>n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
    }
    if (sum % 2 == 0)
        cout << "0" << endl;
    else
        cout << 1 << endl;
    return 0;
}
