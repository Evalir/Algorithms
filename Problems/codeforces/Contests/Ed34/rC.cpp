#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    int N;
    cin >> N;
    vector<long> boxes;
    vector<int> boxOcc;

    for(int i = 0; i < N; i++) {
        long x;
        cin >> x;
        boxes.push_back(x);
        boxOcc.pb(0);
        boxOcc[i]++;
    }

    sort(boxes.begin(), boxes.end());

    for(int i = 0; i < N - 1; i++) {
        // if (boxes[i] < boxes[i+1] && boxes[i+1]) {
        //     cout << "PUT BOX " << boxes[i] << " ON " << boxes[i+1] << endl;
        //     boxes[i] = 0;
        // }
        for(int j = 0; j < N; j++) {
            if (boxes[i] < boxes[j] && boxOcc[j] != 2 ) {
                boxOcc[j] = 2;
                boxes[i] = 0;
                break;
            }
            else continue;
        }
        
    }

    int counter = 0;
    for(int i = 0; i < N; i++) {
        if (boxes[i] != 0) counter++;
    }

    cout << counter << endl;

}