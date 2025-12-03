#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    int arrA[6] = {234, 5, 89, 24, 34, 45};
    int arrB[10] = {12, 24345, 4645, 31232, 34535, 13235, 3546, 457568, 6587546, 35632};
    reverseArr(arrA, 6);
    reverseArr(arrB, 10);

    printArr(arrA, 6);
    printArr(arrB, 10);

    return 0;
}
//! Lec 09 Completed