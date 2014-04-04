#include "complex.console.h"
#include <iostream>

using namespace std;

void inputNumber( Complex  &number )
{
    cout << " Enter the Real Part Of Number: ";
    cin >> number.realPart;
    cout << endl;

    cout << " Enter the Imaginary Part Of Number: ";
    cin >> number.imaginaryPart;
    cout << endl;
}

void showNumber( Complex number )
{
    cout << number.realPart << " + " << number.imaginaryPart << " i " << endl;
}
