/*
Motivation Problem: Given a sorted array A,A, having N integers. You need to find any pair(i,j)(i,j) having sum as given number XX.

Constraints: Array AA contains about 105105 integers with each having values around 109109.
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
 
struct tuple {
    int l, r;
};

tuple getPair(VI& el, int S, int N) {
    int l = 0, r = N-1;
    while( l < r) {
        if (el[l] + el[r] == S) {
            tuple t;
            t.l = el[l];
            t.r = el[r];
            return t;
        }
        else if (el[l] + el[r] > S) r--;
        else l++;
    }
    tuple NOT_FOUND;
    NOT_FOUND.l = 0;
    NOT_FOUND.r = 0;
    return  NOT_FOUND;
}

int main(){
    int N, SUM;
    cin >> N >> SUM;
    VI el; //will holds items to iterate over
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }

    //two pointers;
    int l = 0, r = 0;
    
    tuple p = getPair(el, SUM, N);

    cout << p.l << " AND "<< p.r << endl;

}

/*
6 10
1 3 4 6 8 10
*/