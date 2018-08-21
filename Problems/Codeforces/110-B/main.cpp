#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> s = {'a','b','c','d'};
    for(int i = 0; i < n; i++) {
        cout << s[i%4];
    }
    puts("");
    return 0;
}