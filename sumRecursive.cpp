#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    else
    {

        int lastElement = arr[size - 1];

        int restSum = sumArray(arr , size - 1);

        int currentSum = lastElement + restSum;

        return currentSum;
    }
}
int main()
{

    int arr[5] = {3, 2, 10, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sumArray(arr, size);
    cout << "sum: " << sum << endl;
}