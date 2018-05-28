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

bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c=='u') {
        return true;
    }
    return false;
}

bool isWeirdDigit(char c) {
    if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9') return true;
    
    return false;
}
int main(){
    string S;
    cin >> S;
    int counter = 0;
    for(int i = 0; i < S.size(); i++) {
        if (isVowel(S[i]) || isWeirdDigit(S[i])) counter++;
        else continue;
    }

    cout << counter << endl;
    return 0;
}