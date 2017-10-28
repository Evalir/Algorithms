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

int main() {
    int N;
    vector<int> teibol; //table
    vector<int> PS; //prefix sum
    int acc = 0; //acc for prefix
    cin >> N;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        acc += x; //calculate prefix sum
        PS.push_back(acc); //push prefix sum
        teibol.push_back(x); //push el to table
    }

    //display prefix sum.
    




    return 0;
}

/*WHAT IS PREFIX SUM?
- Prefix sum is nothing else than a "table" with the sum of all elements until the current element we're iterating.
Let's say we've got an array consisting of these elements:
POS: 0 1 2 3 4 5 6
ELE: 1 2 3 4 5 6 7

Calculating the prefix sum would give us a table with the current sum up to each position, like so:
POS: 0 1 2 3  4  5  6
ELE: 1 3 6 10 15 21 28

This is useful because it lets us return the sum of any elements we'd like, even if we have a range composed of numbers in the middle.
How to get prefix sum:
- Get range of elements: L & R
    - if range is composed from 0 to current element, return number at pos R in table
    - if range doesn't start at 0, return number at pos R - number at position L-1. formally, sum would be (R-(L-1)) in range.
*/