#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int m[5][5];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> m[i][j];
    for(int i = 1; i <= (int)1e5; i++) {
        int s = i + m[0][1] + m[0][2];
        int k = s - m[1][0] - m[1][2];
        int z = s - m[2][0] - m[2][1];
        m[0][0] = i;
        m[1][1] = k;
        m[2][2] = z;

        if (k > 0 && z > 0 && k <= (int)1e5 && z <= (int)1e5) {
            int h1 = m[0][0] + m[0][1] + m[0][2];
            int h2 = m[1][0] + m[1][1]+ m[1][2];
            int h3 = m[2][0] + m[2][1] + m[2][2];
            int v1 = m[0][0] + m[1][0] + m[2][0];
            int v2 = m[0][1] + m[1][1] + m[2][1];
            int v3 = m[0][2] + m[1][2] + m[2][2];
            int dg1 = m[0][0] + m[1][1] + m[2][2];
            int dg2 = m[0][2] + m[1][1] + m[2][0];
            //cerr << "SUMS" << endl;
            //cerr << h1 << ' ' << h2 << ' ' << h3 << endl << v1 << ' ' << v2 << ' ' << v3 << endl << dg1 << ' ' << dg2 << endl;
            if (h1 == h2 && h1 == h3 && h1 == v1 && h1 == v2 && h1 == v3 && h1 == dg1 && h1 == dg2) {
                for (int l = 0; l < 3; l++) {
                    for (int r = 0; r < 3; r++)
                        cout << m[l][r] << ' ';
                    cout << endl;
                }
                break;
            }

        }
    }
    return 0;
}