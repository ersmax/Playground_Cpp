#include <iostream>
#include <cmath>
using namespace std;

int main ( ) {
    double result = pow(-3,-3);
    cout << result << endl;
    char letter = 'a';
    unsigned char b = letter; // Assign char to unsigned char (byte)
    cout << "As char: " << letter << endl;
    cout << "As byte (int): " << static_cast<int>(b) << endl; // Print as integer value
    return 0;
}