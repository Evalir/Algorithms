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
    string hateIt = "I hate";
    string loveIt = "I love";
    string That = "that";
    string it = "it";

    for(int i = 0; i < N; i++) {
        if (i % 2 == 0 && i != N-1) {
            cout << hateIt << " " << That << " ";
        }
        else if (i % 2 != 0 && i != N-1) {
            cout << loveIt << " " << That << " ";
        }
        else if (i % 2 == 0 && i == N-1) {
            cout << hateIt << " ";
        }
        else if (i % 2 != 0 && i == N-1) {
            cout << loveIt << " ";
        }
        
    }

    cout << it << endl;

    return 0;
}