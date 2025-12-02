#include <iostream>
using namespace std;

int calculatorSwitchCase(int num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
    case '%':
        cout << num1 % num2;
    case '*':
        cout << num1 * num2;
    case '/':
        cout << num1 / num2;
    default:
        break;
    }
}

int main()
{
    int num1, num2;
    char op;
    cout << "Enter a Num 1 -> ";
    cin >> num1;
    cout << "Enter a Num 2 -> ";
    cin >> num2;
    cout << "Enter a Operation do you want --> ";
    cin >> op;
    calculatorSwitchCase(num1, num2, op);
    return 0;
}