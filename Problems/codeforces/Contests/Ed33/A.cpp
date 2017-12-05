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
    int N;
    cin >> N;
    VI el;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }
    bool Alex = 1;
    bool Bob = 1;
    bool Carl = 0;
    int counter = 0;
   for(int i = 0; i < N; i++) {
        if (el[i] == 1) {
            if (Alex == 1 && Bob == 1){
                counter++;
                Alex = 1;
                Bob = 0;
                Carl = 1;
            }
            else if (Alex == 1 && Bob == 0) {
                counter++;
                Alex = 1;
                Bob = 1;
                Carl = 0;
            }
        }
        if (el[i] == 2) {
            if (Alex == 0 && Bob == 1) {
                counter++;
                Alex = 1;
                Bob = 1;
                Carl = 0;
                
            }
            else if (Alex == 1 && Bob == 1) {
                counter++;
                Alex = 0;
                Carl = 1;
                Bob = 1;
            }
        }
        if (el[i] == 3) {
            if (Alex == 1 && Bob == 0) {
                counter++;
                Alex = 0;
                Bob = 1;
                Carl = 1;
            }
            else if (Alex == 0 && Bob == 1) {
                counter++;
                Alex = 1;
                Bob = 0;
                Carl = 1;
            }
        }
   }

  // cout << counter << endl;
   if (counter == N) cout << "YES" << endl;
   else cout << "NO" << endl;
   return 0;
}