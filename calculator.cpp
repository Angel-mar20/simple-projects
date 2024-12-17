#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(double a, double b)
    {
        cout << "Result: " << a + b << endl;
    }
    void subtract(double a, double b)
    {
        cout << "Result: " << a - b << endl;
    }

    void multiply(double a, double b)
    {
        cout << "Result: " << a * b << endl;
    }
