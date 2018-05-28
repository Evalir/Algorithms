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
    int people = N / 2;
    int cards[N+10];
    int maxsum = 0;
    for(int i = 0; i < N; i++) {
        cin >> cards[i];
        maxsum += cards[i];
    }
    int target = maxsum/people;

    for(int i = 0; i < N; i++) {
    if (cards[i] != 0)
        for(int j = 0; j < N; j++) {
            if (cards[i] + cards[j] == target && j != i) {
                cout << i+1 << " " << j+1 << endl;
                cards[j] = 0, cards[i] = 0;
                break;
            }
        }
    else continue;
    }

    return 0;
}