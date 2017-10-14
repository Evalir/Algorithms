//Pointer practice from learncpp.com

#include <iostream>
using namespace std;

int main() {
    //using adress-of and derefence operator
    int x = 0;
    cout << x << " address: " << &x << endl;
    cout << "print value of address: " << *&x << endl;
    cout << "\n\n";
    //this will print the address of the int and then the value below
    
    //declaring pointers
    //first declare variables
    int value = 10;
    double value2 = 1e10;
    
    //declare pointers to variables
    int *val = &value;
    double *val2 = &value2;
    //if we printed this, it would display the addresses of these values
    cout << val << " " << val2 << endl;
    
    //derefencing a pointer (getting the value of the address they hold)
    cout << *val << " POINTER DEREFENCED " << *val2 << endl;
    //Redeclaring the value from the variable value with a pointer
    *val = 12;
    cout << *val << " <- variable redeclared" << endl;
    
    return 0;
}