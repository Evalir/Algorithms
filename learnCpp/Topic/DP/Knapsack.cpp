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

int N;
int W;

struct Box {
	int value, weight;
};


int joaGetWeight(vector<Box> boxes, int capacity) {
	int best = 0;

	for(int i = 0; i < boxes.size(); i++) {
		//take box #i
		Box b = boxes[i];
		//if weight is less than capacity, take it
		if (b.weight <= capacity) {
			vector<Box> cBoxes = boxes;
			cBoxes.erase(cBoxes.begin()+i);
			int value valAfterPuttingI = joa(cBoxes, capacity - b.weight);
			int bestWithI = valAfterPuttingI + b.value;
			best = max(best, bestWithI);
		}
	}
	return best;
}

int main() {
	
	return 0;
}