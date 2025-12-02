#include <iostream>
using namespace std;

int find_max(int arr[], int lengthOfArr)
{
    int max = -9999999;
    for (int i = 0; i < lengthOfArr; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max Element is -> " << max << endl;
    // return 0;
}

int find_min(int arr[], int lengthOfArr)
{
    int min = 99999999;
    for (int i = 0; i < lengthOfArr; i++)
    {
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Min Element is -> " << min << endl;

    return 0;
}

int main()
{
    int arr[] = {0, 121, 124564, -457657, 2413, 132435, 7897, 9767, 5675, 3453};
    find_max(arr, 10);
    cout << endl;
    find_min(arr, 10);
    return 0;
}
//!  53:30