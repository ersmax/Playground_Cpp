#include <iostream>

void fillUp(int (&a)[10], int size);
// Precondition: size is the declared size of the array
//               User will type in the array element or indexed variables
// Postcondition: The array `a` is filled with integers from console inline

void fillUp(int (&a)[10], int size) {
    std::cout << "Enter " << size << " numbers:\n";
    for (int& element : a)
        std::cin >> element;
    std::cout << "The last array index used is: " << (size - 1) << "\n";
}

int main( ) {
    int myArray[10] = {};

    fillUp(myArray, 10);
    std::cout << "\n";
    return 0;
}
