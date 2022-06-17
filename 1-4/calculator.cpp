#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    char op;
    cout << "Input an Operator: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Enter valid operator. \n";
        break;
    }
    return 0;
}