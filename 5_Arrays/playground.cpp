#include <iostream>

int main() {
    int myArray[5];
    std::cout << myArray[4];

    // You cannot use a variable for the array size in C++
    int number;
    std::cout << "Enter number of students:";
    std::cin >> number;
    int score[number]; // This is not allowed in standard C++


    std::cout << "\n";
    return 0;
}