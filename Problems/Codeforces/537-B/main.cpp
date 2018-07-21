#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <string.h>
#include <time.h>
#define TAKE 1
#define IGNORE 2
#define BASE 3
using namespace std;
vector<int> v;
char memo[70][1000005];
char NEXT[70][1000005];

int joa(int pt, int rem) {
    int ans;
    if (rem == 0) {
        NEXT[pt][rem] = BASE;
        return 0;
    }
    if (pt < 0) {
        return 100;
    }
    if (memo[pt][rem] != -1) {
        return memo[pt][rem];
    }
    if (rem - v[pt] < 0) {
        NEXT[pt][rem] = IGNORE;
        return memo[pt][rem] = joa(pt-1, rem);
    }
    else {
        int y = joa(pt-1, rem);
        int x = 1 + joa(pt, rem - v[pt]);
        if (x <= y) {
            ans = x;
            NEXT[pt][rem] = TAKE;
        }
        else {
            ans = y;
            NEXT[pt][rem] = IGNORE;
        }
    }
    memo[pt][rem] = ans;
    return ans;
}

vector<int> numz;
void getAns(int pt, int rem) {
    if (pt < 0)
        return;

    if (NEXT[pt][rem] == BASE)
        return;

    if (NEXT[pt][rem] == TAKE) {
        numz.push_back(v[pt]);
        getAns(pt, rem - v[pt]);
    }
    if (NEXT[pt][rem] == IGNORE)
        getAns(pt-1, rem);

    return;
}

long long conv(int n)  {
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0) {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= 64; i++)
        v.push_back(conv(i));
    memset(memo, -1,sizeof(memo));
    memset(NEXT, -1, sizeof(NEXT));
    int pt = v.size()-1;
    for(int i = 0; i <= 1e6; i++)
        joa(pt,i);
    int ans = joa(pt,n);
    getAns(pt,n);
    cout << ans << endl;
    for(int i = 0; i < numz.size(); i++)
        cout << numz[i] << ' ';
    puts("");
    cerr << 1.0 * clock() / CLOCKS_PER_SEC << endl;
    return 0;
}
