#include <iostream>
using namespace std;

int bitWiseComplement(int n)
{
    int m = n;
    int mask = 0;
    if (n == 0)
    {
        return 0;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}

int main()
{
    int num;
    cout << "Enter a Number \n";
    cin >> num;
    cout << bitWiseComplement(num);
    return 0;
}