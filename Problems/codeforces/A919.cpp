#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    double m;
    cin >> n >> m;
    double mincost = 1000000;
    vector<int> bravos;
    for(int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        mincost = min(mincost, (a/b)*m);
    }

    printf("%.8f", mincost);
}