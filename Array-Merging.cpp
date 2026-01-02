//Array-Merging.cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int arr1[4] = {6, 7, 8, 9};

    int arr3[8];

    // COPY OF ARR
    for(int i = 0; i < 4; i++)
    {
        arr3[i] = arr[i];
    }

    // COPY OF ARR1
    for(int i = 0; i < 4; i++)
    {
        arr3[i + 4] = arr1[i];
    }

    // PRINT OF ARR3
    for(int i = 0; i < 8; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}
