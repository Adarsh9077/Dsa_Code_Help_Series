#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int reversedInteger(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    return ans;
}

int main()
{
    cout << "Jai Shree Ram\n";
    int userInput;
    cout << "Enter a number --> ";
    cin >> userInput;
    int output = reversedInteger(userInput);
    cout << output;
    return 0;
}