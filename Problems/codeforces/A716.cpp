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
 
 
int main(){
    long N, C;
    cin >> N >> C;
    long a = -1;
    int count = 0;
    VI nums;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    count++;
    for(int i = 1; i < N; i++) {
        a = nums[i-1];
        if (abs(nums[i] - a) <= C) { // b - a <= C
            count++;
        }
        else {
            count = 1;
        }
    }
    cout << count << endl;
}