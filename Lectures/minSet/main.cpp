#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//Cuenta cuantos numeros menores que n hay en el arreglo (query)
//Para esto ordena los elementos y borra duplicados. N de elementos menores a x =
// elementos diferentes a x a la izquierda.
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
vector<int> V;
vector<pair<int,int> > cV;

int main() {
    LowCount v(V);
    //coordinate compression -> asigna un key x a cada numero del arreglo
    for(int i =  0; i < 1000000; i++)
        V.push_back(pow(rand(),2));

    for(int& i : V) {
        cV.push_back({v.query(i), i});
    }

    for(auto i : cV) {
        //cout << i.first << ' ' << i.second << endl;
    }
    cout << "done" << endl;
    return 0;
}