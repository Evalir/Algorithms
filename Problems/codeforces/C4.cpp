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
    string word;
    map<string, int> wcount;

    for(int i = 0; i < N; i++) {
        cin >> word;
        wcount[word]++;
        if (wcount[word] == 1) {
            cout << "OK" << endl;
        }
        else {
            cout << word << wcount[word]-1 << endl;
        }
    }
    return 0;
}