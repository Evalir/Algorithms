#include <cstdio>
#include <set>
using namespace std;

int main() {
    int N, M;

    //read and check at the same time
    while ((2==scanf("%d %d", &N, &M)) && N != 0 && M != 0) {
        set<int> Jack;
        set<int> Jill;
        int x;
        int y;
        set<int>::iterator Jiterator;
        int counter = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &x);
            Jack.insert(x);
        }

        for (int i = 0; i < M; i++) {
            scanf("%d", &y);
            Jill.insert(y);
        }

        if (N < M) {

            for (Jiterator = Jack.begin(); Jiterator != Jack.end(); Jiterator++) {
                if (Jill.count(*Jiterator) > 0) counter++;
            }

            printf("%d\n", counter);

        } else {

            for (Jiterator = Jill.begin(); Jiterator != Jill.end(); Jiterator++) {
                if (Jack.count(*Jiterator) > 0) counter++;
            }

            printf("%d\n", counter);
        }
    }
    return 0;
}