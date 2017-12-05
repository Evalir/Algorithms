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
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef long long llong;

int main() {
	int N;
	cin >> N;
	vector<llong> numbers;
	for(int i = 0; i < N; i++){
		long long temp;
		cin >> temp;
		numbers.push_back(temp);
    }
    
	if(N == 1){
		cout << 1 << endl;
		return 0;
	}else if(N == 2){
		cout << 1 << endl;
//		return 0;
    }
    else {
		long long dif = numbers[N-2] - numbers[N-1];
        //cerr << "dif: " << dif << endl;
        //cerr << "size-3: " << numbers.size() - 3 << endl;
		for(int i = numbers.size()- 3; i >= 0; i--){
//			cerr <<"diff: " << numbers[i] << " " << numbers[i+1] << " rs: " << abs(numbers[i] - numbers[i+1]) << endl;
			if(numbers[i] - numbers[i+1] != dif) {
				cout << (i+1)+1 << endl;
				return 0;
			}
		}
		cout << 1 << endl;
	}
	return 0;
}



/*
7
1 2 3 4 5 8 9
 */
