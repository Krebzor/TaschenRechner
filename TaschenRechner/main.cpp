#include <iostream>
#include "biblio.h"
using namespace std;



int main() 
{
   

    // Eingabe
    cout << "Geben Sie den ersten Operanden ein: ";
    cin >> operand1;

    cout << "Geben Sie den Operator (+, -, *, / , ! , ^) ein: ";
    cin >> oper;

    cout << "Geben Sie den zweiten Operanden ein: ";
    cin >> operand2;

    // Verarbeiten
    switch (oper) 
    {
    case '+':
        result = add(operand1, operand2);
        break;
    case '-':
        result = sub(operand1, operand2);
        break;
    case '*':
        result = mult(operand1, operand2);
        break;
    case '/':
        result = div(operand1, operand2);
        break;
    case '^':
        result = power(operand1, int (operand2));
        break;
    case '!':
        result = fact(int(operand1)); 
        break;
    default:
        cout << "Ungültig!" << endl;
        return 1;

    }
    

    // Ausgabe
    cout << "Das Ergebnis ist: " << result << endl;

    cout << "Weiter berechnen? j/n " << result << endl;
    //cin >> choice << endl;

    return 0;
}

