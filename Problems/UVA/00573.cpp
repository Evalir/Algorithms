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
    double Height, Dist, Slide, Fatigue;
    while (cin >> Height >> Dist >> Slide >> Fatigue && Height != 0) {
        double currDist = 0.000;
        bool deadAlive = 0;
        int counter = 0;
        
        while (currDist < Height || (currDist > 0 && counter != 0)) {
            counter++;
            //simulate day
            currDist += Dist;
            cout << currDist << endl;
            if (currDist >= Height) {
                deadAlive = 1;
                break;
            }
            //drag down
            currDist -= Slide;
            if (currDist == 0)
                break;
            //drag distclimb down
            Dist -= Fatigue / 10.0;
        }

        if (deadAlive == 1) cout << "success on day " << counter << endl; 
        else cout << "failure on day " << counter << endl;
    }
    
    return 0;
}