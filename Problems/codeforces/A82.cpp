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
typedef vector<string> VS;
typedef vector<VI> VII;

int main() {
    int N;
    cin >> N;
    if (N >= 5) {
        N -= 1;
        while (N >= 5) {
            N = N % 5;
        }
        if(N == 0) cout << "Sheldon" << endl;
        else if (N == 1) cout << "Leonard" << endl;
        else if (N == 2) cout << "Penny" << endl;
        else if (N == 3) cout << "Rajesh" << endl;
        else if (N == 4) cout << "Howard" << endl;
    }
    else {
        if(N == 0) cout << "Sheldon" << endl;
        else if (N == 1) cout << "Leonard" << endl;
        else if (N == 2) cout << "Penny" << endl;
        else if (N == 3) cout << "Rajesh" << endl;
        else if (N == 4) cout << "Howard" << endl;
    }
 
    return 0;
}

/*
if((N % 5)-1 == 0) cout << "Sheldon" << endl;
        else if ((N % 5)-1 == 1) cout << "Leonard" << endl;
        else if ((N % 5)-1 == 2) cout << "Penny" << endl;
        else if ((N % 5)-1 == 3) cout << "Rajesh" << endl;
        else if ((N % 5)-1 == -1) cout << "Howard" << endl;
*/