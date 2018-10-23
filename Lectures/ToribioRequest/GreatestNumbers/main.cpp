#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;

struct GreatestNumbers {
    multiset<int> alofocker;
    int K;
    GreatestNumbers(int _K) {
        K = _K;
    }

    void putNumber(int n) {
        alofocker.insert(n);
        while(alofocker.size() > K) {
            alofocker.erase(alofocker.begin());
        }
    }

    int getMax(int x) {
        auto it = alofocker.rbegin();
        if (*it == x) {
            it++;
        }
        return *it;
    }
};

int main() {

    return 0;
}