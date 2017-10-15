//
// Created by Enrique Ortiz on 10/15/17.
//
#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;

    while((1==scanf("%d", &T))) {
        multiset<int> List1;
        multiset<int> List2;
        multiset<int>::iterator sIterator;
        int N, M;
        int x, y;
        int counter = 0;

        cin >> N >> M;

        for (int i = 0; i < N; i++) {
            cin >> x;
            List1.insert(x);
        }

        for (int i = 0; i < M; i++) {
            cin >> y;
            List2.insert(y);
        }

        for (sIterator = List1.begin(); sIterator != List1.end(); sIterator++) {
          if (List1.count(*sIterator) > List2.count(*sIterator)) {
            cout << List1.count(*sIterator) << endl;
          }
        }
        cout << endl;
        for (sIterator = List1.begin(); sIterator != List1.end(); sIterator++) {
          cout << *sIterator << endl;
        }



    }
    return 0;
}
