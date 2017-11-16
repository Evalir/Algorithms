/*
Motivation Problem: Given an array having NN integers,, find the contiguous subarray having sum as great as possible,, but not greater than MM. For details on the statement, refer the problem link here

Constraints: Array can have atmost 105105 elements and each number will be non-negative and can be as big as 109109.
*/

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
 
 int greatSum(VI& arr, int N, int MAX) {
    int l = 0, r = 0;
    int sum = 0;
    int ans = 0;
    while(l < N) {
        while (r < N && sum + arr[r] <= MAX ) {
            sum += arr[r];
            cout << "USED " << arr[r] << endl;
            r++;
        }
        ans = max(ans, sum);
        sum -= arr[l];
        cout << "SUBTRACTED " << arr[l] << endl;
        l++;
    }

    return ans;
 }
int main(){
    int N, M;
    cin >> N >> M;
    VI arr;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int res = greatSum(arr, N, M);

    cout << res << endl;

    return 0;
}

/*
5 12
2 1 3 4 5
*/ 