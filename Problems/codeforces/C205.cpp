#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    unsigned long long c = 11;
    cout << c << endl;
    vector<unsigned long long> el;
    for(int i = 1; i < 1e17; i++) {
        el.push_back(c*pow(10,i));
    }
    

    return 0;
}
