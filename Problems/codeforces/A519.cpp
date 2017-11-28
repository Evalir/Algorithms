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
#include <string>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;
 
 
int main(){
    int qWhite = 0, qBlack = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
           char c;
           cin >> c;
           if (c == 'Q') qWhite += 9; //queen
           if (c == 'q') qBlack += 9; 
           if (c == 'R') qWhite += 5; //rook
           if (c == 'r') qBlack += 5;
           if (c == 'B') qWhite += 3; //bishop
           if (c == 'b') qBlack += 3;
           if (c == 'N') qWhite += 3; //knight
           if (c == 'n') qBlack += 3;
           if (c == 'P') qWhite += 1; // pawn
           if (c == 'p') qBlack += 1;
        }
    }

    if (qWhite > qBlack) cout << "White" << endl;
    else if (qWhite < qBlack) cout << "Black" << endl;
    else cout << "Draw" << endl;


}