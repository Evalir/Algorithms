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
	string QAQ;
	int counter = 0;
	for(int i = 0; i < S.length(); i++) {
		if (S[i] == 'Q' || S[i] == 'A' || S[i] == 'Q') {
			QAQ += S[i];
		}
	}

	for(int i = 0; i < QAQ.length(); i++) {
		for(int j = 0; j < QAQ.length(); j++) {
			for(int k = 0; k < QAQ.length(); k++) {
				if (QAQ[i] == 'Q' && (QAQ[j] == 'A' && j < k && i < j) && (QAQ[k] == 'Q') && i < k) {
					counter++;
				}
			}
		}
	}

	cout << counter << endl;
	return 0;
}