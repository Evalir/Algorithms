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
 
 
int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int counter = 0;
    bool sec = false;
    int csec = 0;
    VI cel;
    for(int i = 0; i < N; i++) {
        if (S[i] == 'B' && sec == false) {
            counter++;
            sec = true;
            csec++;
            //cerr << "COUNTED SEC, NOW ITS " << csec << endl;
        }
        else if (S[i] == 'B' && sec == true) {
            counter++;
        }
        else if (S[i] == 'W'){
            sec = false;
            cel.push_back(counter);
            counter = 0;
        }
    }

    if (counter > 0) {
        cel.push_back(counter);
        counter = 0;
    }

    if (csec > 0) {
        cout << csec << endl;
        for(int i = 0; i < cel.size(); i++) {
            if(cel[i] != 0) cout << cel[i] << " ";
        }
    }
    else {
        cout << 0 << endl;
        return 0;
    }
    return 0;
}