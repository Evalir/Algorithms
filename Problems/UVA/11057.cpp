#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;
long n, k, li = -1;

int main() {
    while(cin >> n) {
        long books[n];
        for(int i = 0; i < n; i++)
            cin >> books[i];
        cin >> k;
        int a, b, minans = 10000000;
        for(int i = 0; i < n; i++) {
            int b1 = books[i];
            long* b2 = find(books, books+n, k-b1);
            if (b2-books < n) {
                if (books[b2-books]+b1 == k && books[b2-books] >= b1 && i != b2-books) {
                    if (books[b2-books]-books[i] < minans) {
                        a = books[i];
                        b = books[b2-books];
                        minans = b - a;
                    }
                }
            }
        }
        
        cout << "Peter should buy books whose prices are " << a << " and " << b << "." << endl;
        cout << endl;
    }
    return 0;
}
