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

struct Vova {
    int h, attack, pot;
};

struct monst {
    int h, attack;
};


int main() {
    Vova vova;
    monst modcrab;
    cin >> vova.h >> vova.attack >> vova.pot;
    cin >> modcrab.h >> modcrab.attack;
    vector<string> decision;
    int counter = 0; //cout rounds;

    while (modcrab.h > 0) {
        counter++;
        //attack
        if (modcrab.h - vova.attack <= 0){
            modcrab.h -= vova.attack;
            decision.pb("STRIKE");
            break;
        }
        else if (vova.h - modcrab.attack > 0) {
            modcrab.h -= vova.attack;
            decision.pb("STRIKE");
        }
        else if (vova.h - modcrab.attack <= 0){
            vova.h += vova.pot;
            decision.pb("HEAL");
        }
        if(modcrab.h <= 0) {
            break;
        }

        vova.h -= modcrab.attack; //monster attacks
    }
    cout << counter << endl;
    for(int i = 0; i < decision.size(); i++) {
        cout << decision[i] << endl;
    }

    return 0;
}