// by evalir.io
// Created by Enrique Ortiz on 10/6/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    long long in;
    vector<int> enums;
    vector<int> onums;
    long long bestsum = 0;
    long long esum = 0;
    long long osum = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> in;
        if (in % 2 == 0) enums.push_back(in);
        else onums.push_back(in);
    }

    sort(onums.begin(), onums.end(), greater<int>());

    for (int i = 0; i < enums.size(); i++) {
        esum += enums[i];
    }

    if (onums.size() % 2 == 0) {
        for (int i = 0; i < onums.size(); i++) {
            osum += onums[i];
        }
    } else {
        for (int i = 0; i < onums.size() - 1; i++) {
            osum += onums[i];
        }
    }

    bestsum = esum + osum;


    cout << bestsum << endl;



}

