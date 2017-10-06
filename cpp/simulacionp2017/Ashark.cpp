// by evalir.io
// Created by Enrique Ortiz on 10/6/17.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    long long in;
    vector<int> nums;
    long long bestsum = 0;
    long long currsum = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> in;
        nums.push_back(in);
    }

    for (int i = 0; i < n; i++) {
        currsum += nums[i];
        if (currsum % 2 == 0 && currsum > bestsum) bestsum = currsum;

    }

    cout << bestsum << endl;



}

