//Problema arbolito navidad simulacion INTEC 2015

#include <iostream>
using namespace std;

int main() {
  int lineas;
  cin >> lineas;
  char asterisco = '*';
  char espacio = ' ';
  int espacios = lineas;
  int asteriscos = 1;

  for(int i = 0; i < lineas; i++) {
    espacios -= 1;
    if (i != 0) {
      asteriscos += 2;
      cout << "\n";
    }
    for(int j = 0; j < espacios; j++) {
      cout << espacio;
    }
    for (int k = 0; k < asteriscos; k++) {
      cout << asterisco;
    }
  }
}
