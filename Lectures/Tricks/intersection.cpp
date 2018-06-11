#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool hasIntersection(pair<int,int> range1, pair<int,int> range2) {
	if (range2.first > range1.second || range1.first > range2.second)
		return false;
	else
		return true;
}

pair<int,int> getIntersection(pair<int,int> range1, pair<int,int> range2) {
	pair<int,int> Inter = {max(range1.first, range2.first), min(range1.second,range2.second)};
	return Inter;
}

int main() {

}
