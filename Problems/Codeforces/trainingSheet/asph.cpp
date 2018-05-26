#include <cstdio>
#include <cmath>
using namespace std;
#define PI 3.14159
int main() {
	int r;
	scanf("%d",&r);
	double vol = (4.0/3.0)*PI*r*r*r;
	printf("VOLUME = %.3lf\n", vol);
	return 0;
}