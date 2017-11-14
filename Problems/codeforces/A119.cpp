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
#define MAX (int)1e7
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int joa(int a, int h) {
    int counter = 1;
    for(int i = 1; i <= a; i++) {
        if (a % i == 0 && h % i == 0) counter = i;
    }
    //cout << "TOOK COUNT " << counter << endl;
    return counter;
}

bool played = false;

int main() {
    int A, B, HEAP; //vars to read
    int rheap = 1;
    int counter = 0;
    cin >> A >> B >> HEAP; //read
    // while(HEAP != 0) {
    //     rheap = joa(A, HEAP);
    //     HEAP -= rheap;
    //     counter++;
    // }

    for(int i = 0; HEAP > 0; i++) {
        if (played == false) {
        rheap = joa(A, HEAP);
        HEAP -= rheap;
        counter++;
        played = true;
        } 
        else {
            rheap = joa(B, HEAP);
            HEAP -= rheap;
            counter++;
            played = false;
        }
    }
    //Antisimon - 1, Simon - 0.
    if (counter % 2 == 0) cout << "1" << endl;
    else cout << "0" << endl;
 //   cout << counter << endl;
 
    return 0;
}
