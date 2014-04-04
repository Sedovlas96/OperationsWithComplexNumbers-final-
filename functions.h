#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct Complex
{
    double realPart;
    double imaginaryPart;
};

Complex sumOfNumbers( Complex firstNumber, Complex secondNumber );
Complex differenceOfNumbers( Complex firstNumber, Complex secondNumber );
Complex multiplicationOfNumbers( Complex firstNumber, Complex secondNumber );
Complex complexConjugation( Complex number );
Complex numberInTrigonometricForm( Complex number );
double moduleOfComplexNumber ( Complex number );
double argumentOfComplexNumber ( Complex number );

#endif // FUNCTIONS_H
