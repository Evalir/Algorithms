#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
/*
 * Leer N numeros y sacar el mayor de ellos
 * 3
 * 4 10 23
 * 5 maxelement = 19
 * 14 7 5 19 17
 * 
 * */

int main() {
    int n;
    vector<int> V;
    cin >> n; //leer n
    
    //leer los n elementos. el for va de 0...n-1
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        V.push_back(temp);
    }
    cout << V.size() << endl; //Imprimir el tamano del vector
    
    sort(V.begin(), V.end()); //ordenar el vector de menor a mayor
        for(int i = 0; i < V.size(); i++)
            cout << V[i] << ' ';
    
    sort( V.begin(), V.end(), greater<int>()); //ordenar el vector de mayor a menor
        for(int i = 0; i < V.size(); i++)
            cout << V[i] << ' ';
    
    
    return 0;
}
