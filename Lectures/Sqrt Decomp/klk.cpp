#include <iostream>
#include <vector>
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

vector<int> merge(vector<int>& A, vector<int>& B) {
	vector<int> res;
	int pA = 0, pB = 0;

	while(pA < A.size() || pB < B.size()) {
		if (pA < A.size() && pB < B.size()) {
        	if (A[pA] <= B[pB]) {
				res.push_back(A[pA]);
				pA++;
			}
			else {
				res.push_back(B[pB]);
				pB++;
			}
        } else if (pA == A.size()) {
        	while(pB < B.size()) {
				res.push_back(B[pB]);
				pB++;
			}
        } else {
    		while(pA < A.size()) {
				res.push_back(A[pA]);
				pA++;
			}    
        }
	}
	return res;
}

int main()  {
	vector<int> a = {12,15,18,21};
	vector<int> b = {3,6,8,10,13};
	vector<int> c = merge(a,b);
	for(int& i : c) {
		cout << i << endl;
	} 

	return 0;
}
