        #include <iostream>
using namespace std;

void printAnArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"-> "<< arr[i]<<"\n";
    }
}

int main()
{
    int arr[] = {
        123,
        654,
        232,
        3657,
        79868,
        123234,
    };
    printAnArr(arr,6);
    return 0;
}
//! 44:10