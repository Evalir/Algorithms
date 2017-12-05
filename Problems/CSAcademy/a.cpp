#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {  

    int a;
    int sum;
    for(int i = 0; i < 3; i++) {
        vector<int> el;
        for (int i = 0; i < 3; i++) {
            cin >> a;
            el.push_back(a);
        }
        sort(el.begin(), el.end());
        sum +=el[0];
    }

    cout << sum << endl;

    return 0;
}
