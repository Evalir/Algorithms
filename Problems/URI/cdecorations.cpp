#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#define PI 3.141592654
#define INF (int)1e9+7
using namespace std;

int main() {
	double A, B, C;
	while(cin >> A >> B >> C) {
		double rA = A * (PI/180);
        double ans = B*tan(rA) + C;
        printf("%.2f\n", ans*5);
	}
    return 0;
}

