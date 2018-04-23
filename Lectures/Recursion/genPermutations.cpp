// Compiled with: g++ -Wall -std=c++14 -pthread

#include <iostream>
#include <vector>

using namespace std;
int counter = 0;
// devuelve una lista de permutaciones
vector<vector<int> > generateAllPermutations(vector<int> numbers) {
    counter++;
    vector<vector<int> > ret;
    
    if(numbers.size() == 0){
        vector<int> empty;
        ret.push_back(empty);
        return ret;
    }
    
    for(int i = 0; i < numbers.size(); i++) {
        int v = numbers[i];
        vector<int> remaining = numbers;
        remaining.erase(remaining.begin() + i);
        
        vector<vector<int> > subPermutations = generateAllPermutations(remaining);

        for(vector<int> subPermutation : subPermutations) {
            subPermutation.insert(subPermutation.begin(), v);
        }
    }
    return ret;
}

int main(){
    
    vector<int> n;
    n.push_back(1);
    n.push_back(2);
    n.push_back(3);
    n.push_back(4);
    for(vector<int> permutation : generateAllPermutations(n)) {
        for(int v : permutation)
            cout << v << " ";
        cout << endl;
    }

    cout << counter << endl;
    return 0;
}



// // Compiled with: g++ -Wall -std=c++14 -pthread

// #include <iostream>
// #include <vector>

// using namespace std;

// // devuelve una lista de permutaciones
// vector<vector<int>> generateAllPermutations(vector<int> numbers) {
//     vector<vector<int>> ret;
    
//     if(numbers.size() == 0){ // si no tengo numeros, solo existe 1 sola permutacion el empty {}
//         vector<int> empty; // crea un (empty)
//         ret.push_back(empty); // agregalo al listado de permutaciones
//         return ret; // devuelve ese listado con una sola permutacion
//     }
    
//     for(int i = 0; i < numbers.size(); i++) {
//         int v = numbers[i]; // elejimos un numero
//         // luego genramos todas las permuatciones con los numeros que quedan
//         // como hacemos eso?
//         vector<int> remaining = numbers;
//         remaining.erase(remaining.begin() + i); // haciendo un subset de todos los numeros excepto el que cogi

//         // guardo en un vector todas las permutaciones posibles con los elementos restantes
//         // llamemosle a esto sub-permutacion
//         vector<vector<int>> subPermutations = generateAllPermutations(remaining);
        
//         // ahora viene la parte tricky 
//         // para cada sub-permutacion la sub-permutacion ignoro el elemento que tome
//         // que en vdd lo seleccione primero que todos.
        
//         // ya que ignore el elemento que tome lo correcto es poner el elemento que tome en la primera posicion de todas las 
//         // sub-permutaciones
//         for(vector<int> subPermutation : subPermutations) {
//             subPermutation.insert(subPermutation.begin(), v); // aqui insertamos el elemento que tome en la primera posicion de cada subpermutacion
//             // al insertar el elemento eso me genera una permutacion con todos los elementos de "numbers"
//             // agregamos esa permutacion valida al arreglo de "ret" que contiene la lista de cada permutacion
//             ret.push_back(subPermutation);
//         }
//     }
//     return ret;
// }

// int main(){
    
//     vector<int> n = {1,2,3,4};
//     for(vector<int> permutation : generateAllPermutations(n)) {
//         for(int v : permutation)
//             cout << v << " ";
//         cout << endl;
//     }
//     return 0;
// }