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
#include <string>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
int joaAddNums(int S) {
    int sum = 0;
    while (S > 0) {
        sum += S % 10;
        S /= 10;
    }

    return sum;
}

bool joaGetLength(int N, int goal) {
    int l = 0;
    while (N > 0) {
        N /= 10;
        l++;
    }

    if (l == goal) return true;
    else return false;
}
int main(){
    int N, M, D = 0;
    cin >> N >> M;

    for(int i = 0; i < )


}