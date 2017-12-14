#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    int N;
    cin >> N;
    VI boxes(N);

    for(auto &box : boxes)
        scanf("%d", &boxes);

    sort(all(boxes));

    priority_queue<int, VI, greater<int> > PQbox;

    for(int i = 0; i < N; i++) {
        if (PQbox.size() > 0 && PQbox.top() < boxes[i]) {
            PQbox.pop();
        }
        PQbox.push(boxes[i]);
    }

    cout << PQbox.size() << endl;
    return 0;
}

/*
Logica detras de la solucion:
El truco está en que el priority queue siempre enseña la caja mas pequeña, pero al principio está vacio. Lo que hace es que desde que encuentra una caja mas grande que la del top del pq en el vector, le hace pop, simulando que la sacó. 
*/