#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        //* code
        fact = fact * i;
    }
    return fact;
}

float nCr(int n, int r)
{
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter a number -> ";
    cin >> n;
    cout << "Enter r number -> ";
    cin >> r;
    cout<< "\nAnswer is -> "<< nCr(n,r);
    return 0;
}
