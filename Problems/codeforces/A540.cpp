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
    string comb;
    cin >> comb;
    string target;
    cin >> target;
    int counter = 0;
    int distance = 0;
    for(int i = 0; i < N; i++) {
        //equal
        if (comb[i] - target[i] == 0) {
            continue;
        }
        //positive and less than 5
        else if (comb[i] - target[i] <= 5 && comb[i] - target[i] > 0) {
            //cout << "BETWEEN 1 - 5 POS" << endl;
            counter += comb[i] - target[i];
            //cout << counter << " N OF MOVES "<< endl;
        }
        //simulation bigger tha nfive and positive
        else if (comb[i] - target[i] > 5) {
            counter += ((comb[i] - target[i])*-1) + 10; 
        }
        //simulation bigger than five and positive'
        else if (comb[i] - target[i] < -5) {
            counter += (comb[i] - target[i]) + 10;
        }
        //negative and bigger than -5
        else if (comb[i] - target[i] >= -5 && comb[i] - target[i] < 0) {
            //cout << "BETWEEN 1 - 5 NEG" << endl;
            counter += abs(comb[i] - target[i]);
            //cout << counter << " N OF MOVES" << endl;
        }
}

    cout << counter << endl;
    return 0;
}