#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {1, 26, 3, 4, 53, 23, 435, 23};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
