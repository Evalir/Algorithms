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

bool isVowel(char c) {
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') return true;
    else return false;
}

int main(){
    string S;
    cin >> S;
    int maxv = 1;
    int dist = 0;
    for(int i = 0; i <= S.length(); i++) {
        if (!isVowel(S[i])) dist++;
        else {
            dist++;
            maxv = max(maxv, dist);
            dist = 0;
            }
        if (i == S.size()-1 && !isVowel(S[i])) {
            dist++;
            maxv = max(maxv, dist);
            dist = 0;
        }
    }

    cout << maxv << endl;
}

// ABABBBACFEYUKOTT