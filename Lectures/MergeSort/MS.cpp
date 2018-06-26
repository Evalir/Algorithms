#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int inv = 0;

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
                inv+=A.size()-pA;
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

vector<int> mergeSort(vector<int> A) {
	if ((int)A.size() == 1)
		return A;

	vector<int> vA, vB;

	for(int i = 0; i < (int)A.size()/2; i++)
		vA.push_back(A[i]);

	for(int i = (int)A.size()/2; i < A.size(); i++)
		vB.push_back(A[i]);

	vA = mergeSort(vA);
	vB = mergeSort(vB);
	vector<int> res = merge(vA,vB);
	return res;
}

int main() {
  inv = 0;
	vector<int> A = {1,3,2,4,5};
	vector<int> B = mergeSort(A);
	for(int& i : B)
		cout << i << ' ';
	cout << "\n inversions: " << inv << endl;
	return 0;
}
