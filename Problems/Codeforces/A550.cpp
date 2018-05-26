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

int main() {
	string S;
	cin >> S;
    vector<int> A;
    vector<bool> B;
    for(int i = 0; i < S.size()-1; i++) {
		if (S[i] == 'A' && S[i+1] == 'B') {
            B.push_back(1);
            A.push_back(i);
        }
        if (S[i] == 'B' && S[i+1] == 'A') {
            B.push_back(0);
            A.push_back(i);
        }
	}
    
    for(int i = 0; i < A.size(); i++) {
        for(int j =0 ; j < B.size(); j++) {
            if (i != j) {
                if (B[i] == 1 && B[j] == 0 && (A[i]+1 != A[j]) && A[i]-1 != A[j]) {
                    cerr << A[i] <<  ' ' << A[j] << endl;
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "NO" << endl;
	return 0;
}
