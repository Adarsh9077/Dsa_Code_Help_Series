#include <iostream>
using namespace std;

void swapArrAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        // if ()
        swap(arr[i], arr[i + 1]);
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {23, 65, 78, 87, 67, 87};
    printArr(arr, 6);
    swapArrAlternate(arr, 6);
    printArr(arr, 6);
    return 0;
}

//! 7:20