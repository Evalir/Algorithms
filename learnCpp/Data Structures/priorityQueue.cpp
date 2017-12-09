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

struct Compare {
    bool operator() (const string& a, const string& b) { return a > b; }
};

struct IntCompare {
    bool operator() (const int& a, const int& b) { return a > b; }
};

int main(){
    priority_queue<int> pq; //in this case with numbers priority queue orders numbers by how big they are
    pq.push(123);
    pq.push(13);
    pq.push(223);
    pq.push(10);

    int x = pq.top();
    cout << x << endl;

    pq.pop();
    x = pq.top();
    cout << x << endl;

    //priority queue de string, la cosa es que este saca el "mas chiquito" mediante el compare
    priority_queue<string, vector<string>, Compare > pq2;
    pq2.push("aa");
    pq2.push("ab");
    pq2.push("aa");
    pq2.push("abbb");
    pq2.push("ccca");
    pq2.push("c");

    string s = pq2.top();
    cout << s << endl;

    priority_queue<int, vector<int>, IntCompare > pq3;
    pq3.push(123);
    pq3.push(13);
    pq3.push(223);
    pq3.push(10);

    int z = pq3.top();
    cout << z << endl;
   
    return 0;
}