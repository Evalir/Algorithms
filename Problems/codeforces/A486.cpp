//
// Created by Enrique Ortiz on 10/4/17.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long func = 0;
    long long even = 0;
    long long odd = 1;

//    func = even - odd;

    for (long long i = 0; i < n / 2; i++) {
        even += i;
    }
    
    even = even*2;
    if ( n % 2 != 0) even++;

    for (long long i = 0; i < n / 2; i+= 2) {

    }

    for (long long i = 0; i < n; i++) {
        if ( i % 2 != 0) {
            func -= i;
        } else if (i % 2 == 0) {
            func += i;
        }
    }

    func += (pow(-1, n))*n;

    cout << func << endl;
}
/*BREAKING DOWN THE PROBLEM:
 *  We need to get the function -1+2-3+...+(-1)to the n * n.
 *  Odd numbers are subtracted and even numbers are added.
 *  We can cut the even numbers computation by half by summing all numbers up to the middle and multiplying
 *  by two.
 *  The odd numbers have no easy way of getting cut by half.
 *
 *
 *
 * */
