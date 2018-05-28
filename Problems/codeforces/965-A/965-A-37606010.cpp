#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
#include <string>
using namespace std;

int main() {
    long long k, n, s, p;
    cin >> k >> n >> s >> p;
    long long sneeded = n%s == 0 ? n/s : (n/s)+1;
    long long tsheets = k*sneeded;
    cerr << tsheets << endl;
    long long ans = tsheets % p == 0 ? tsheets/p : (tsheets/p)+1;
    cout << ans << endl;
    return 0;
}