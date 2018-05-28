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
    int A, B;
    cin >> A >> B;
    int mi;
    int counterboth = 0;
    int counterone = 0;
    //calculate how many socks can he use with each color

    if (A >= B) mi = B;
    else mi = A;
    for(int i = 0; i < mi; i++) {
        A--;
        B--;
        counterboth++;
    }

    //cerr << A << " " << B << endl;

    while (A > 1) {
        A -= 2;
        counterone++;
    }

    while (B > 1) {
        B -= 2;
        counterone++;
    }

    cout << counterboth << " "<< counterone <<  endl;

}