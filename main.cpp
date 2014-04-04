#include <iostream>
#include "functions.h"
#include "complex.console.h"
#include <windows.h>

using namespace std;

int main()
{
    Complex firstNumber, secondNumber;
    firstNumber.realPart = 0;
    firstNumber.imaginaryPart = 0;
    secondNumber.realPart = 0;
    secondNumber.imaginaryPart = 0;
    int key = 0;
    do
    {
        cout << " It's Complex Numbers: " << endl;
        showNumber( firstNumber );
        cout<<endl;
        showNumber( secondNumber );
        cout << endl;
        cout << " What do you want to do with these numbers? " << endl;
        cout << " ~1~ - For enter new complex numbers " << endl;
        cout << " ~2~ - For show complex numbers " << endl;
        cout << " ~3~ - For sum of complex numbers " << endl;
        cout << " ~4~ - For difference of complex numbers " << endl;
        cout << " ~5~ - For multiplication of complex numbers " << endl;
        cout << " ~6~ - For complex conjugation " << endl;
        cout << " ~7~ - For show the complex numbers in trigonometric form " << endl;
        cout << " ~0~ - For exit " << endl;
        cin >> key;
        switch( key )
        {
        case 1:
        {
            system( " cls " );
            cout << endl;
            cout << endl << " Enter the First Complex Number: ";
            inputNumber( firstNumber );
            cout << endl << " Enter the Second Complex Number: ";
            inputNumber( secondNumber );
            cout << endl;
        }
        break;
        case 2:
        {
            system( " cls " );
            cout << endl << " The First complex Number: ";
            showNumber( firstNumber );
            cout << endl << " The Second complex Number: ";
            showNumber( secondNumber );
            cout << endl;
        }
        break;
        case 3:
        {
            system( " cls " );
            Complex sum = sumOfNumbers( firstNumber, secondNumber );
            cout << endl << " The sum Of Complex Numbers = ";
            showNumber( sum );
        }
        break;
        case 4:
        {
            system( " cls " );
            Complex dif = differenceOfNumbers( firstNumber, secondNumber );
            cout << endl << " The difference Of Complex Numbers = ";
            showNumber( dif );
        }
        break;
        case 5:
        {
            system( " cls " );
            Complex mult = multiplicationOfNumbers( firstNumber, secondNumber );
            cout << endl << " The multiplication Of Complex Numbers = ";
            showNumber( mult );
        }
        break;
        case 6:
        {
            system( " cls " );
            Complex conjOne = complexConjugation( firstNumber );
            Complex conjTwo = complexConjugation( secondNumber );
            cout << endl << " The Complex Conjugation for first number = ";
            showNumber( conjOne );
            cout << endl << " The Complex Conjugation for second number = ";
            showNumber( conjTwo );
        }
        break;
        case 7:
        {
            system( " cls " );
            double moduleOne = moduleOfComplexNumber( firstNumber ), argumentOne = argumentOfComplexNumber( firstNumber );
            double moduleTwo = moduleOfComplexNumber( secondNumber ), argumentTwo = argumentOfComplexNumber( secondNumber );
            cout << " First number in trigonometric Form: ";
            cout << moduleOne << " ( cos( " << argumentOne << " ) + i sin( " << argumentOne << " )) " << endl;
            cout << " Second number in trigonometric Form: ";
            cout << moduleTwo << " ( cos( " << argumentTwo << " ) + i sin( " << argumentTwo << " )) " << endl;
        }
        }

    }
    while( key );
    return 0;
}
