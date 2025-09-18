/*
Write a complete program that asks the user for a seed and then outputs a list of
ten random numbers based on that seed. The numbers should be floating-point
numbers in the range 0.0 to 1.0 (inclusive).
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ( ) {
    unsigned seed;
    cout << "Enter an unsigned integer as the seed: ";
    cin >> seed;
    srand(seed);  // seed the random number generator
    cout << "Here are ten random numbers:\n";
    for (int i = 0; i < 10; ++i)
        cout << static_cast<double>(rand()) / RAND_MAX << endl;
    return 0;
}