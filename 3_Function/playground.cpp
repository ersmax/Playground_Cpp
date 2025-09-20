/*
Write a function declaration (function prototype) and a function definition for
a function that takes three arguments, all of type int, and that returns the sum
of its three arguments.
*/

#include <iostream>
#include <cmath>
using namespace std;

// function prototype
int sumThree(int a, int b, int c);

int main ( ) {
    int x, y, z;
    cout << "Enter three integers:";
    cin >> x >> y >> z;
    cout << "The sum of " << x << ", "
         << y << ", and " << z
         << " is " << sumThree(x, y, z) << endl;

    return 0;
}
int sumThree(int a, int b, int c) {
    return a + b + c;
}