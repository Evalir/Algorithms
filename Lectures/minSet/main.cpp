#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//Cuenta cuantos numeros menores que n hay en el arreglo (query)
//Para esto ordena los elementos y borra duplicados. N de elementos menores a x = elementos diferentes a x a la izquierda.
struct LowCount {
    vector<int> V;
    LowCount(const vector<int>& v) {
        V = v;
        sort(V.begin(), V.end());
        V.erase(unique(V.begin(),V.end()),V.end());
    };
    int query(int n) {
        int Q = lower_bound(V.begin(),V.end(), n) - V.begin();
        return Q;
    }
};

int main() {
    vector<int> V = {2,4,4,5,8,9};
    vector<pair<int,int> > cV;
    LowCount v(V);
    //coordinate compression -> asigna un key x a cada numero del arreglo
    for(int& i : V) {
        cV.push_back({v.query(i), i});
    }

    for(auto i : cV) {
        cout << i.first << ' ' << i.second << endl;
    }

    return 0;
}