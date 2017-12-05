// by evalir.io
// Created by Enrique Ortiz on 10/6/17.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k, fi, ti;
    int bsatisfaction = 0;
    int csatisfaction;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> fi >> ti;

        if (ti > k) {
            csatisfaction = fi - (ti - k);
            if (bsatisfaction <= 0 && csatisfaction < bsatisfaction) bsatisfaction = csatisfaction;
        } else if (ti <= k) {
            csatisfaction = fi;
            if (bsatisfaction < csatisfaction) bsatisfaction = csatisfaction;

        }

        if (bsatisfaction < csatisfaction) bsatisfaction = csatisfaction;
//        else if (bsatisfaction > csatisfaction && csatisfaction < 0 && bsatisfaction <= 0) bsatisfaction = csatisfaction;
        else if (n == 1)bsatisfaction = csatisfaction;
    }

    cout << bsatisfaction << endl;

}

