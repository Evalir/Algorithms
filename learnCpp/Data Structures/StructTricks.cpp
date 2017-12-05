#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Dragon {
   int nivel, bono;
   string nombre;
   bool  operator<  ( const Dragon& right ) const {
      // este metodo debe devolver true si d1 es "menor" que d2
      if (nivel < right.nivel)
         return true;
      else
         return false;
   }
};

bool compare_dragons( const Dragon& d1, const Dragon& d2 ) {
   // esta funcion debe devolver true si d1 es "menor" que d2
   if (d1.nivel < d2.nivel)
      return true;
   else
      return false;
}

int main(int argc, char* argv[]) {
   int N;
   cin >> N;
   vector<Dragon> dragones;
   for (int i = 0; i < N; i++) {
      int nivel, bono;
      string nombre;
      cin >> nivel >> bono >> nombre;
      dragones.push_back({ nivel, bono, nombre });
   }

   // usa el operator< definido en el struct Dragon
   // sort( dragones.begin(), dragones.end() );

   // usa la funcion compare_dragons
   // sort( dragones.begin(), dragones.end(), compare_dragons );

   // usa un anonymous function (lambda) de C++11
   sort(dragones.begin(), dragones.end(),
         [&] (const Dragon& d1, const Dragon& d2) -> bool {
            if (d1.nivel < d2.nivel)
               return true;
            else
               return false;
         }
   );

   for (Dragon d : dragones) {
      cout << d.nivel << ' ' << d.bono << ' ' << d.nombre << '\n';
   }

   return 0;
}

   