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
    long datwo, dathree, dafive, dasix;
    int used = 0;
    cin >> datwo >> dathree >> dafive >> dasix;
    long ans = 0;
    long many256 = min(datwo, dafive);
    many256 = min(many256, dasix);
    long many32 = min(datwo, dathree);
  //  cout << many256 << " " << many32 << endl;

    if (many32 > many256){
       // cout << "CHOSE 256" << endl;
        for(long i = 0; i < many32; i++) {
            ans += 32;
            datwo--;
        }
        many256 = min(datwo, many256);
        for(long i = 0; i < many256; i++) {
            ans += 256;
        }
        cout << ans << endl;
    }
    else {
     //   cout << "CHOSE 256" << endl;
        for(long i = 0; i < many256; i++) {
            ans += 256;
            datwo--;
        }
        many32 = min(many32, datwo);
        for(long i = 0; i < many32; i++) {
            ans += 32;
        }
        cout << ans << endl;
    }
    return 0;
}