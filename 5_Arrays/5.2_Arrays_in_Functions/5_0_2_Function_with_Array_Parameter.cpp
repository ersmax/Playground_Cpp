#include <iostream>

void fillUp(int (&a)[10], int size);
// Precondition: size is the declared size of the array
//               User will type in the array element or indexed variables
// Postcondition: The array `a` is filled with integers from console inline


void fillUp2(int a[], int size);
// Precondition: size is the declared size of the array
//               User will type in the array element or indexed variables
// Postcondition: The array `a` is filled with integers from console inline
//                The difference here is that the array decays to pointer to first element.
//                Thus, for practical purposes, it `behaves` very much like a call-by-reference parameter.

int main( ) {
    int myArray[10] = {};

    fillUp(myArray, 10);
    fillUp2(myArray, std::size(myArray));
    std::cout << "\n";
    return 0;
}

void fillUp(int (&a)[10], int size) {
    std::cout << "Enter " << size << " numbers:\n";
    for (int& element : a)
        std::cin >> element;
    std::cout << "The last array index used is: " << (size - 1) << "\n";
}

void fillUp2(int a[], int size) {
    std::cout << "Enter " << size << " numbers:\n";
    for (size_t  idx = 0; idx < size; ++idx)
        std::cin >> a[idx];
    std::cout << "The last array index used is: " << (size - 1) << "\n";
}

