#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n;
    int k;
    cin >> n >> k;
    set<char> nums;
    for(int i = 0; i < k; i++) {
        char x;
        cin >> x;
        nums.insert(x);
    }
    string ld = "";
    cout << ld.size() << endl;
    while(n > ld) {
        for(int i = 0; i <= 9; i++) {
            if (ld.size() == 0) {
                if (nums.count((char)i) == 0 && (char)i >= n[0]) {
                    cerr << "hey!" << endl;
                    ld += (char)i;
                    break;
                }
            }
            else {
                if (nums.count((char)i) == 0) {
                    cerr << "hey2!" << endl;
                    ld += (char)i;
                    break;
                }
            }
        }
        cerr << "curr ld " << ld << endl;
    }
    cout << ld << endl;
    return 0;
}
