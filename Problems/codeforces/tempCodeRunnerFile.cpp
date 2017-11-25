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
 
 
int main(){
    uint64 N, T;
    cin >> N >> T;
    uint64 base = pow(10, N-1);
    //cerr << base << endl;

    uint64 thres = pow(10, N);
    string num;
        if (T == 10 && N !=1) {
            for(int i = 0; i < N-1; i++) {
                cout << 1;
            }
                cout << 0 << endl;
                return 0;
        }
        else {
        if (N < 17) {
      //      cerr << "Yeah" << endl;
            for(uint64 i = base; i < thres; i++) {
                if (i % T == 0) {
                    cout << i << endl;
                    return 0;
                }
            }
                cout << -1 << endl;
                return 0;
        }
        else {
            for(int i = 0; i < N; i++) {
                cout << T;
            }
            return 0; 
        }
    }
    return 0;
}