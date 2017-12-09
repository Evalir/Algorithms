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

struct IntCompare {
    bool operator() (const int& a, const int& b) { return a > b; }
};

int main(){

    int N;
    while(cin >> N && N != 0) {
        int acc = 0;
        priority_queue<int, vector<int>, IntCompare > PQ;
    
        for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        PQ.push(x);
        }

        while(PQ.size() > 1) {
            int a = PQ.top();
            PQ.pop();
            int b = PQ.top();
            PQ.pop();
            //cout << "A AND B " << a << " " << b << endl;
            int c = a+b;
            acc += c;
            PQ.push(c);
        }

    cout << acc << endl;
    
}

    return 0;
}