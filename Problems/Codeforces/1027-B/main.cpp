#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <cstring>
#include <string>
using namespace std;
using Long = long long;

void generate(int sz) {
    int arr[100][100];
    memset(arr,0,sizeof(arr));
    int cnt = 1;
    for(int i = 1; i <= sz; i++)
        for(int j = 1; j <= sz; j++) {
            if (!(i & 1) && !(j & 1)) {
                arr[i][j] = cnt++;
            }
            else if ((i & 1) && (j & 1)) {
                arr[i][j] = cnt++;
            }
        }
    for(int i = 1; i <= sz; i++)
        for(int j = 1; j <= sz; j++) {
            if (!(i & 1) && (j & 1)) {
                arr[i][j] = cnt++;
            }
            else if ((i & 1) && !(j & 1)) {
                arr[i][j] = cnt++;
            }
        }
    for(int i = 1; i <= sz; i++) {
        for (int j = 1; j <= sz; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}
int main() {
    Long n, q;
    cin >> n >> q;
    generate(7);
    while(q--) {
        Long l, r;
        cin >> l >> r;
        Long x, y;
        Long st2 = ceil((n*n)/2) + 1;
        cerr << st2 << endl;
        x = 1;
        if (r & 1)
            y = r - floor(r/2);
        else
            y = st2 + (abs(2-r))/2;
        cerr << y << " is" << endl;
        if ((l % 2 == 0 && r % 2 == 0) || (l % 2 != 0 && r % 2 != 0)) {
            //Long ans = y - (floor())
        }

    }
    return 0;
}