#include <iostream>
using namespace std;

void rowSum(int arr[][3], int i, int j)
{
    cout << "printing row-wise sum:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int res = 0;
        for (int j = 0; j < 3; j++)
        {
            res += arr[i][j];
        }
        cout << res << endl;
    }
}

int main()
{
    int arr[3][3];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing those elements
    cout << "printing the elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    rowSum(arr, 3, 3);
    cout << endl;
}
// for column-sum just revrt the "i" and "j" places