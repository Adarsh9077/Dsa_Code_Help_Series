#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter a Number ->";
    cin >> num;
    bool result = isEven(num);
    if (result)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
    return 0;
} //! 46:11