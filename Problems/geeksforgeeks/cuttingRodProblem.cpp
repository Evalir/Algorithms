#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int n = 8;

int joaRodRecursive(int price[], int n) {
    if (n <= 0)
        return 0;
    
    int maxv = -1e9;
    //recursively cut the rod
    for(int i = 0; i < n; i++){
        maxv = max(maxv, price[i] + joaRodRecursive(price, n-i-1));
    }

    return maxv;
}

int main() {
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    cout << "MAX VAL IS " << joaRodRecursive(price, n);
    return 0;
}