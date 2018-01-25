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
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

long long N, T;
VI books;
VI booksPS;

int main() {
    cin >> N >> T;
    READALL(books);
    int best = 0;
    int i = 0;
    int j = 0;
    int acc = books[i];
    int total = 0;
    while (i < books.size()) {
        //forward
        if (acc <= T){
            best = max(best, total);
            cout << "UPDATED MAX" << endl;
            }
        while (j < books.size()) {
            j++;
            total++;
            acc += books[j];
            cout << "book " << books[j] << " acc " << acc << endl;
            if (acc > T) break;
        }

          if (acc <= T){
            best = max(best, total);
            cout << "UPDATED MAX" << endl;
            }
        cout << "cc i " << i << " j " << j << endl;
        while (i < books.size()) {
            i++;
            total--;
            acc -= books[i];
            if (acc <= T) break;
        }
    }

    cout << best << endl;
    return 0;
}

// bool check(long long mid) {
//     if (booksPS[mid] <= T) return true;
//     else return false;
// }

// int binary_search_simple(int lo, int hi) {
//    int res = -1; // remains -1 if no argument is good
//    while (lo <= hi) {
//       int mid = lo + (hi - lo) / 2;
//       bool chk = check(mid);
//     //  cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
//       if (chk) {
//          lo = mid + 1;
//          res = mid;     // if searching for last NO, move this line to else case  
//       } else {
//          hi = mid - 1;
//       }
//    }
//    return res;
// }


// int main(){
//     cin >> N >> T;
//     long long acc =0;
//     for(int i = 0; i < N; i++) {
//         int x;
//         cin >> x;
//         books.pb(x);
//     }

//     sort(all(books));
    
//     for(int i = 0; i < N; i++) {
//         acc += books[i];
//         booksPS.pb(acc);
//     }

//     for(int i = 0; i < N; i++) {
//         cout << booksPS[i] << endl;
//     }
//     int ans = binary_search_simple(0, N-1)+1;

//     cout << ans << endl;

//     return 0;
// }