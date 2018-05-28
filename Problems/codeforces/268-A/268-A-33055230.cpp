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
 
struct match {
    int h, g;
};
int main(){
    int N;
    cin >> N;
    vector<match> play(N+100);
    int counter = 0;
    
    for(int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        play[i].h = x;
        play[i].g = y;
    }
    //klk
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if (play[i].h == play[j].g) counter++;
            else continue;
        }
    }

    cout << counter << endl;
    return 0;
}