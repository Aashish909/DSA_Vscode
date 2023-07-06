#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    bool found = binarySearch(arr, 0, size - 1, key);

    if (found)
    {
        std::cout << "Key found" << std::endl;
    }
    else
    {
        std::cout << "Key not found" << std::endl;
    }

    return 0;
}