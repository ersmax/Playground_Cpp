#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ( ) {
    string text;
    fstream inputStream;

    inputStream.open("99_Text_files/0_player.txt");

    while (inputStream >> text)     // if there is still data to read
        cout << text << endl;

    inputStream.close();

    return 0;
}
