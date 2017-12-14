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
    FREQ boxes;
    int ans = -1;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        boxes[x]++;
        ans = max(ans,boxes[x]);
    }

    cout << ans << endl;

    return 0;
}

/*
Logica detras de la solucion: La caja que mas se repita es la respuesta, ya que las cajas mas pequeñas siempre podran entran en cajas mas grandes, sin importar que tan grande sea la diferencia de tamaño.
1 3 3 3 4 4 5 5 5 5
3x 3 3 4 4 5 5 5 5
3 4x 4x 5 5 5 5
3 5x 5x 5 5
5x 5x 5x 5
Las cajas mas grandes nunca desaparecen.
*/