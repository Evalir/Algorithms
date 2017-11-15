#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

struct Dragon {
    int x,y;

    //modify less than operator to be able to compare struct
    bool  operator<  ( const Dragon& right ) const {
        if (x < right.x)
           return true;
        else
           return false;
     }
};


int main() {
    int S, N;
    cin >> S >> N;
    vector<Dragon> dragons;

    for(int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        Dragon d;
        d.x = x;
        d.y = y;
        dragons.push_back(d);
    }

    sort(dragons.begin(), dragons.end());

    for(int i = 0; i < N; i++) {

        if (dragons[i].x < S) {
            S += dragons[i].y;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}