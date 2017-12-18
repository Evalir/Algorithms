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
#include <iomanip>
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
    float a, b;
    char c;
    cin >> a >> b >> c;
    int counter = 0;
    bool ppoint = 0;
    stringstream convert;
    string result;
    convert << setprecision(9) << setfill('0')<< fixed << a / b;

    result = convert.str();   
    cout << result << endl;
    for(int i = 0; i < result.length(); i++) {
        if (result[i] == '.') ppoint = 1; //found zero, start count
        if (ppoint == 1 && result[i] != '.') counter++;
        //cout << "ITERATING ON DIGIT " << result[i] << " WITH COUNT" << counter << endl;
        if (result[i] == c && ppoint == 1) {
            cout << counter << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

/*
237 / 123 = 1.9268292683
*/