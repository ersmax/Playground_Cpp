/*
This program illustrates the use of two functions
to compute and show the temperature conversion.
*/
#include <iostream>
using namespace std;

double tempConversion(double cDegrees);
double insertTemperature();
void showResult(double fDegrees, double cDegrees);

int main( ) {
    double celsius = insertTemperature( );
    double fahrenheit = tempConversion(celsius);
    showResult(fahrenheit, celsius);
    return 0;
}

double tempConversion(double cDegrees) {
    return (9/5.0) * cDegrees + 32.0;
}

double insertTemperature() {
    double celsius;
    cout << "Insert temperature in C:";
    cin >> celsius;
    return celsius;
}

void showResult(double fDegrees, double cDegrees) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << cDegrees << " degrees Celsius is "
         << fDegrees << " degrees Fahrenheit.\n";
}




