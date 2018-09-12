#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main() {
    auto comp1 = [&](pii a, pii b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    };


    return 0;
}