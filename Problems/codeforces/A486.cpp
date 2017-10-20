//
// Created by Enrique Ortiz on 10/4/17.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long answer;

    if (n% 2 == 0) {
      answer = 1*(n/2);
    } else {
      answer = 1*((n+1)/2);
      answer *= -1;
    }

    cout << answer << endl;
    return 0;

}
