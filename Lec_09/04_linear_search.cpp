#include <iostream>
using namespace std;

bool searchElement(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {12, 24345, 4645, 31232, 34535, 13235, 3546, 457568, 6587546, 35632};

    cout << "Enter your key " << endl;
    int key;
    cin >> key;
    bool found = searchElement(arr, 10, key);
    if (found)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is absent";
    }

    return 0;
}

//! 01:12:50