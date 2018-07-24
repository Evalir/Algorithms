#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iostream>
int P[2010];
int R[2010];
int FIND(int x){
	if(P[x] == -1)return x;
	return P[x] = FIND(P[x]);
}

int UNION(int x,int y){
	x = FIND(x);
	y = FIND(y);
	if(x == y) return false;
	if(R[x] > R[y]) P[y] = x;
	else P[x] = y;
	R[y] += (R[x] == R[y]);
	return true;
}

int main() {
    memset(P, -1, sizeof(P));
    //do stuff with set
    return 0;
}
