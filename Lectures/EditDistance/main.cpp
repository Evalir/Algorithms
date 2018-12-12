#include <bits/stdc++.h>
using namespace std;

int mem[1000][1000];

//edit distance dp
string a, b;
int dp(int i, int j) {
    if (!i) return j;
    if (!j) return i;
    if (mem[i][j] != -1) return mem[i][j];
    if (a[i - 1] == b[j - 1]) return mem[i][j] = dp(i-1,j-1);
    return mem[i][j] = (1 + min(dp(i-1,j), min(dp(i,j-1), dp(i-1,j-1))));
}

int main() {
    a = "najsdcansdjkclaskhasdkjncajsdcnajskdnjcajlsdljcjndcjnksdcajsdjcajknsldjncajnksdjnkcajnklsljdncalscnjkdsancjkl";
    b = "ncjaksdlacnsjkdcjnasjdcjasjdcjasjkldcasjdcansjkdcajskdcjkasjkdcajnksldjkcjkansdcjknasjdkcjnasjnkdckasjkcjdaskjnlcjkls";
    memset(mem,-1,sizeof(mem));
    cout << dp((int)a.size() - 1, (int)b.size() - 1) << '\n';
    return 0;
}