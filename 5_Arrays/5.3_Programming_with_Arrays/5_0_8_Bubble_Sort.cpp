


#include <iostream>
#include <span>

int main( ) {
    int sampleArray[3] = {0,1,2};
    std::span<int>(sampleArray, 1);
}
