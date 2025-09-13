#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ( ) {
    string firstName, lastName;
    int score;
    fstream inputStream;

    inputStream.open("99_Text_files/0_player.txt");

    if (!inputStream.is_open()) {
        cout << "Failed to open file." << endl;
        return -1;
    }

    inputStream >> score;
    inputStream >> firstName >> lastName;

    cout << "Name: " << firstName << " "
         << lastName << endl;
    cout << "Score: " << score << endl;

    inputStream.close();

    return 0;
}