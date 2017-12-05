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

bool compareEl (vector<int> &el, int l, int r) {
    for(int i = l; i < r; i++){
        if((el[l+1] > el[l] && el[r-1] > el[r])) {
            return true;
            cout << "CUMPLIO" << endl;
        }
        else return false;
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {

        vector<int> el;
        int dataSet;
        int counter = 0;
        
        cin >> dataSet;
       for(int j = 0; j < 15; j++) { //read dataset
            int x;
            cin >> x;
            el.push_back(x);
       }

       for(int l = 0; l < el.size(); l++) {
           for(int r = l+1; r < el.size(); r++) {
               if(el[r] == 0) break;
               if(compareEl(el, l, r)) {
                    counter++;
                    cout << "Cumplio en l y r " << l << " " << r << endl;
               }
           }
       }

       

       cout << dataSet << " " << counter << endl;
    }
 
    return 0;
}
