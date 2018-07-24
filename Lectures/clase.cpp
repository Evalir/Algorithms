#include <iostream>
#include <string>
using namespace std;
long long  memo[1000][1000];
long long dp(int row, int col) {
    if (row == 0 && col == 0)
        return 1;
    if (row < 0 || col < 0)
        return 0;
    if (memo[row][col] != -1)
        return memo[row][col];
    return memo[row][col] = dp(row-1,col) + dp(row,col-1);
}

int main() {
    int x, y;
    cin >> x >> y;
    memset(memo,-1,sizeof(memo));
    cout << "num of ways for: " << x << ' ' << y << " : " << dp(x,y) << endl;
    return 0;
}
