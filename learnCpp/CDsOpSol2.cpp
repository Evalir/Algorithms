#include <cstdio>
#include <set>
using namespace std;
//The difference is here is that we're passing a reference, so we do not copy the whole set.
bool match(set<int> &A, int V) {
    if (A.count(V) != 0) return true;
    else return false;
}

int main() {
    int N, M;
    int x;
    int y;

    //read and check at the same time
    while ((2==scanf("%d %d", &N, &M)) && N != 0 && M != 0) {
        set<int> Jack;
        set<int> Jill;
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
                if (match(Jill, *Jiterator)) counter++;
            }

            printf("%d\n", counter);

        } else {

            for (Jiterator = Jill.begin(); Jiterator != Jill.end(); Jiterator++) {
                if (match(Jack, *Jiterator)) counter++;
            }

            printf("%d\n", counter);

        }
    }
    return 0;
}