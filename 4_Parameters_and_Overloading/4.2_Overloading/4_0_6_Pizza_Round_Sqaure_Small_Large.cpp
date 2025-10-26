#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

void getData(int& smallDiameter, int& largeDiameter,
            double& priceSmall, double& priceLarge);

void getData(int& smallLength, int& smallWidth,
             int& largeLength, int& largeWidth,
             double& priceSmall, double& priceLarge);

void giveResults(int smallDiameter, int largeDiameter,
                 int smallLength, int smallWidth,
                 int largeLength, int largeWidth,
                 double priceRoundSmall, double priceRoundLarge,
                 double priceRectangularSmall, double priceRectangularLarge);

double unitPrice(int diameter, double price);

double unitPrice(int length, int width, double price);

int main( ) {
    int diameterSmall, diameterLarge,
        lengthSmall, widthSmall,
        lengthLarge, widthLarge;
    double priceRoundSmall, priceRoundLarge,
           priceRectangularSmall, priceRectangularLarge;

    cout << "Welcome to Pizza Hut.\n";
    getData(diameterSmall, diameterLarge,
            priceRoundSmall, priceRoundLarge);
    getData(lengthSmall, widthSmall,
            lengthLarge, widthLarge,
            priceRectangularSmall, priceRectangularLarge);
    giveResults(diameterSmall, diameterLarge,
                lengthSmall, widthSmall,
                lengthLarge, widthLarge,
                priceRoundSmall, priceRoundLarge,
                priceRectangularSmall, priceRoundLarge);
    return 0;
}


void getData(int& smallDiameter, int& largeDiameter,
             double& priceSmall, double& priceLarge) {

    cout << "Enter the diameter and price of a SMALL round pizza\n "
        << "(separated by space, e.g. 10 8.99): ";
    cin >> smallDiameter >> priceSmall;
    cout << "Enter the diameter and price of a LARGE round pizza\n "
         << "(separated by space, e.g. 12 10.99): ";
    cin >> largeDiameter >> priceLarge;
}


void getData(int& smallLength, int& smallWidth,
             int& largeLength, int& largeWidth,
             double& priceSmall, double& priceLarge) {

    cout << "Enter the length, width and price of a SMALL pizza\n"
         << "(separated by space, e.g. 10 12 10.99): ";
    cin >> smallLength >> smallWidth >> priceSmall;
    cout << "Enter the length, width and price of a LARGE pizza\n"
         << "(separated by space, e.g. 12 14 12.99): ";
    cin >> largeLength >> largeWidth >> priceLarge;
}

void giveResults(int smallDiameter, int largeDiameter,
                 int smallLength, int smallWidth,
                 int largeLength, int largeWidth,
                 double priceRoundSmall, double priceRoundLarge,
                 double priceRectangularSmall, double priceRectangularLarge) {

    double pPizzaRoundSmall, pPizzaRoundLarge,
           pPizzaRectangularSmall, pPizzaRectangularLarge;

    pPizzaRoundSmall = unitPrice(smallDiameter, priceRoundSmall);
    pPizzaRoundLarge = unitPrice(largeDiameter, priceRoundLarge);
    pPizzaRectangularSmall = unitPrice(smallLength, smallWidth, priceRectangularSmall);
    pPizzaRectangularLarge = unitPrice(largeLength, largeWidth, priceRectangularLarge);

    
}

