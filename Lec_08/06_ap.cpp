#include <iostream>
using namespace std;

int ap(int n)
{
    return (3 * n) + 7;
}

int main()
{
    int num;
    cout << "Enter a Number -> ";
    cin >> num;
    cout << "Answer is -> " << ap(num);
    return 0;
}
