#include <iostream>
using namespace std;

int findPower(int num, int power)
{
    int resultPower = 1;
    for (int i = 1; i <= power; i++)
    {
        resultPower = resultPower * num;
    }
    return resultPower;
}

int main()
{
    int num, power;
    cout << "Enter a number -> ";
    cin >> num;
    cout << "Enter it's Power -> ";
    cin >> power;
    int result = findPower(num, power);
    cout << "Result is -> " << result;
    return 0;
}