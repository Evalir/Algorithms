#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <set>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = 0;
    set<int> A,B,C;
    A.insert(1); B.insert(1); C.insert(1);
    A.insert(a); B.insert(b); C.insert(c);
    for(int i = 1; i <= a/2; i++) {
        //cerr << "HEY1!" << endl;
        (a % i == 0) ? A.insert(i) : A.insert(1);
    }
        
    for(int i = 1; i <= b/2; i++) {
        //cerr << "HEY2!" << endl;
        (b % i == 0) ? B.insert(i) : B.insert(1);
    }
        
    for(int i = 1; i <= c/2; i++) {
        //cerr << "HEY3!" << endl;
        (c % i == 0) ? C.insert(i) : C.insert(1);
    }
    
    for(auto x : A)
        for(auto y : B)
            for(auto z: C) {
                //cerr << "HEY!" << endl;
                if ((a % x == 0 && c % x == 0 && a % y == 0 && b % y == 0 && c % z == 0 && b % z == 0)) {
                    if (x*y == a && x*z == c && z*y == b)
                        ans = x*4 + y*4 + z*4;
                }
            }
        
    cout << ans << endl;
    return 0;
}
