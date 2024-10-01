#pragma once
using namespace std;

//Deklarieren

double operand1, operand2, result;
char oper;

double add(double a, double b) 
{
    return a + b;
}

double sub(double a, double b) 
{
    return a - b;
}

double mult(double a, double b) 
{
    return a * b;
}

double div(double a, double b) 
{
    if (b != 0) 
    {
        return a / b;
    }
    else 
    {
        cout << "Kann nicht durch 0 dividieren!" << endl;
        return 0;
    }
}

double power(double base, int exponent)
{
    double result = 1.0;
    for (int i = 0; i < int(exponent); ++i)
    {
        result *= base;
    }
    return result;
}

int fact(int n)
{
    if (n < 0)
    {
        cout << "Fakultät für negative Zahlen ist undefiniert!" << endl;
        return -1;
    }

    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

