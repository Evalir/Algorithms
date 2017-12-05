#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    vector<int> el;
    map<int, int> mem;

    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        el.push_back(x);
        mem[x] += 1;
    }

    int bestf = 0;
    int bestn = 0;
    for (pair<int, int> x : mem) {
        if (x.second > bestf) {
            bestf = x.second;
            bestn = x.first;
        }
    }

    printf("%d", bestn);

    return 0;
}
