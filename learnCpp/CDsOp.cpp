#include <cstdio>
#include <set>
using namespace std;

bool match(set<int> A, set<int> B, int V) {
    if (A.count(V) != 0 && B.count(V) != 0) return true;
    else return false;
}

int main() {
    int N, M;
    int x;
    int y;
    int counter = 0;
    //read and check at the same time
    //while (cin >> N >> M && N != 0 && M != 0) {
    while ((2==scanf("%d %d", &N, &M)) && N != 0 && M != 0) {
        set<int> Jack;
        set<int> Jill;
        set<int>::iterator Jiterator;

        for (int i = 0; i < N; i++) {
            scanf("%d", &x);
            Jack.insert(x);
        }

        for (int i = 0; i < M; i++) {
            scanf("%d", &y);
            Jill.insert(y);
        }

        if (N > M) {

            for (Jiterator = Jack.begin(); Jiterator != Jack.end(); ++Jiterator) {
                if (match(Jack, Jill, *Jiterator)) counter++;
            }

            printf("%d\n", counter);
            counter = 0;

        } else {

            for (Jiterator = Jill.begin(); Jiterator != Jill.end(); ++Jiterator) {
                if (match(Jack, Jill, *Jiterator)) counter++;
            }

            printf("%d\n", counter);
            counter = 0;

        }
    }
    return 0;
}
/* Things wrong:
 * Time limit exceeded
 * */