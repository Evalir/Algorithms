#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int arr[50010][7];
using Long = long long;
int main() {
    int n, m;
    cin >> m >> n;
    memset(arr,0,sizeof(arr));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    vector<int> anw(m);
    for(int i = 0; i < n; i++) {
        int fr = 0;
        for(int j = 0; j < m; j++) {
            anw[j] = max(fr,anw[j]) + arr[j][i];
            fr = anw[j];
        }
    }
    for(int &t : anw)
        cout << t << ' ';
    puts("");
    return 0;
}