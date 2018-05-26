#include <vector>
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define PI 3.14159
int main() {
	double r;
	cin >> r;
	double ar = PI*r*r;
	cout << "Area = ";
	printf("%.9lf", ar);
	return 0;
}