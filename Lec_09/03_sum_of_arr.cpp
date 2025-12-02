#include <iostream>
using namespace std;

int sumOfArr(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {2, 7, 1, -4, 11};

    cout << "Sum of Arr -> " << sumOfArr(arr, 5);
    return 0;
}