#include "functions.h"
#include <iostream>
#include <cmath>


using namespace std;


Complex sumOfNumbers( Complex firstNumber, Complex secondNumber )
{
    Complex result;
    result.realPart = firstNumber.realPart + secondNumber.realPart;
    result.imaginaryPart = firstNumber.imaginaryPart + secondNumber.imaginaryPart;
    return result;
}

Complex differenceOfNumbers( Complex firstNumber, Complex secondNumber )
{
    Complex result;
    result.realPart = firstNumber.realPart - secondNumber.realPart;
    result.imaginaryPart = firstNumber.imaginaryPart - secondNumber.imaginaryPart;
    return result;
}

Complex multiplicationOfNumbers( Complex firstNumber, Complex secondNumber )
{
    Complex result;
    result.realPart = ( firstNumber.realPart * secondNumber.realPart - firstNumber.imaginaryPart * secondNumber.imaginaryPart ) ;
    result.imaginaryPart = firstNumber.realPart * secondNumber.imaginaryPart + firstNumber.imaginaryPart * secondNumber.realPart ;
    return result;
}

Complex complexConjugation( Complex number )
{
    Complex result;
    result.realPart = number.realPart;
    result.imaginaryPart = - number.imaginaryPart;
    return result;
}

double moduleOfComplexNumber ( Complex number )
{
    double module = sqrt( number.realPart * number.realPart + number.imaginaryPart * number.imaginaryPart );
    return module;
}

double argumentOfComplexNumber ( Complex number )
{
    double module = moduleOfComplexNumber ( number );
    double argument = acos( number.realPart / module ) * 180 / M_PI;
    return argument;
}
