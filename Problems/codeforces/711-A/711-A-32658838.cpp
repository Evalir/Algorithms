#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    int N;
    cin >> N;
    int bus[N][5];
    bool cansit = false;

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            char c;
            cin >> c;
            if (c == 'O') bus[i][j] = 0;
            else if (c == 'X') bus[i][j] = 1;
            else if (c == '|') bus[i][j] = 2;
        }
    }

    //see if they can sit together
    bool out = false;
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            if (bus[i][j] == 0 && bus[i][j+1] == 0 && j != 4) {
                cansit = true;
                out = true;
                bus[i][j] = 3;
                bus[i][j+1] = 3;
                break; 
            }
            else continue;
        }
        if (out) break;
    }

    if (cansit) cout << "YES" << endl;
    //print matrix
   if (cansit) { 
       for(int i = 0; i < N; i++) {
            for (int j = 0; j < 5; j++) {
                if (bus[i][j] == 3) cout << '+';
                if (bus[i][j] == 2) cout << '|';
                if (bus[i][j] == 1) cout << 'X';
                if (bus[i][j] == 0) cout << 'O';
            //else cout << bus[i][j];
            }
            cout << endl;
        }
    }
    else cout << "NO" << endl;
    return 0;
}

/*
6
OO|OX
XO|XX
OX|OO
XX|OX
OO|OO
OO|XX

OUTPUT : YES

*/