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
    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;
        int s = 3, l = 7;
        int sum = 0;
        bool f = 0;
        int a = 0, b = 0;
        bool br = 0;
        //first emulate choosing 3
        while (sum < N && f == 0) {
            sum += s;
            a++;
            if (a * s == N) {
                f = 1;
                br = 1;
                cout << "YES" << endl;
                break;
            }
        }
        sum = 0;
        a = 0;
        //now choose 7
        while (sum < N && f== 0) {
            sum += l;
            b++;
            if (b * l == N) {
                f = 1;
                br = 1;
                cout << "YES" << endl;
                break;
            }
        }

        sum = 0;
        b = 0;
        while (sum < N && f == 0) {
            a++;
            sum += 3;
            int imsum = sum;
            int c = b;
            
            while (imsum < N && f == 0) {
                imsum += 7;
                c++; // tehee
                
                if ((a*s) + (l * c) == N) {
                    cout << "YES" << endl;
                    //cout << "PRINTING ON " << f << endl;
                    br = 1;
                    f = 1;
                    break;
                }
            }
            if (br == 1) break;
        }
        if (f == 0) {
            cout << "NO" << endl;
        }
    }
    return 0;
}