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
 
void primeCheck(long long num) {
    int counter = 0;
    for (int i = 1; i*i <= num; i++) {
        if (num % i == 0) counter++;
        if (counter > 3) {
            cout << "NO" << endl;
            return;
        } 
        else continue;
    }

    cout << "YES" << endl;
}
int main(){
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
            unsigned long long x;
            cin >> x;
            if (x < 100) {
                //cout << "EVAL " << x << endl;
                int counter = 0;
                for (int i = 1; i <= x; i++) {
                    if (x % i == 0) counter++;
                    if (counter > 3) {
                        break;
                    }
                }
                if (counter == 3) cout << "YES" << endl;
                else cout << "NO" << endl; //this is if it's a pure prime
            }
            else primeCheck(x);
        }
    
    return 0;
}