#include <iostream>
using namespace std;

bool(isfound(int arr[][4], int target, int i, int j))
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    cout << "enter element:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j];
        }
    }
    // searching in array
    int target;
    cout << "enter target:";
    cin >> target;

    if (isfound(arr, target, 3, 4))
    {
        cout << "Found";
    }
    else
        cout << "not found";
}