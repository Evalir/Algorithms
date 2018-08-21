#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
ll inv = 0;

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
                inv+=A.size()-pA*1LL;
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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for(int &t : s) cin >> t;
        vector<int> B = mergeSort(s);
        cout << inv << "\n";
        inv = 0LL;
    }
    return 0;
}
