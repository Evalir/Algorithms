#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <cassert>
#include <cstring>
#include <queue>
#include <cstdio>
#include <cmath>
#include <sstream>
#include <bitset>

using namespace std;

typedef long long Long;
typedef vector<int> VI;
typedef vector<VI> VVI;

// this structure is in charge of the range [st, en] (inclusive)
template<class VAL, class UPDATE>
class Bucket {
    VAL headTotal;
    UPDATE headCarry;
    vector<VAL> vals;
    void pushUpdate() {
        for (VAL &v : vals) {
            v += headCarry;
        }
        headCarry = UPDATE();
    }
    void recompute() {
        headTotal = VAL();
        for (VAL &v : vals) {
            headTotal += v;
        }
    }
    void updateAllBucket(UPDATE u) {
        headCarry += u;
        headTotal += u * size();
    }
public:
    Bucket(const vector<VAL> &initVals) : vals(initVals), headCarry(), headTotal() {
        recompute();
    }
    void updateRange(int i, int j, UPDATE u) {
        assert(i >= 0); assert(j < size());
        if ((j - i + 1) == size()) {
            updateAllBucket(u);
            return;
        }
        pushUpdate();
        for (int k = i; k <= j; ++k) {
            vals[k] = vals[k] + u;
        }
        recompute();
    }
    VAL queryRange(int i, int j) {
        assert(i >= 0); assert(j < size());
        if ((j - i + 1) == size()) {
            return headTotal;
        }
        pushUpdate();
        VAL ret = VAL();
        for (int k = i; k <= j; ++k) {
            ret = ret + vals[k];
        }
        return ret;
    }
    int size() {
        return vals.size();
    }
};

vector<int> subArray(const vector<int> &v, int st, int en) {
    return vector<int>(v.begin() + st, v.begin() + en + 1);
}
 
int main(int argc, char *argv[]) {

    vector<int> vals = {1, 2, 3, 4, 5, 6};
    Bucket<int, int> A(subArray(vals, 0, 2)); // in charge of range [0, 2]
    Bucket<int, int> B(subArray(vals, 3, 5)); // in charge of range [3, 5]

    // query [0, 2]
    cout << A.queryRange(0, 2) << endl; // print 6

    // update range [2, 4] -> update[2,2] and update[3,4]
    A.updateRange(2, 2, 2); // he will only update element 2
    B.updateRange(0, 1, 2); // he will update elements 3 and 4

    // query [0, 2]
    cout << A.queryRange(0, 2) << endl; // print 8

    // query [2, 4]
    cout << A.queryRange(2, 2) // query [2, 2]
         +  B.queryRange(0, 1) // query [3, 4]
         << endl; // prints 18

}