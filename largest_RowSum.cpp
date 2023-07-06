#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int i, int j)
{
    int maxi = INT_LEAST16_MIN;
    int rowIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {

            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = j;
        }
    }
    cout << " The maximum sum is " << maxi << endl;
    return rowIndex;
}

// printing row wise
void printRowSum(int arr[][3], int i, int j)
{
    cout << " Printing the sum->";
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {

            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
// printing sum column wise
void printColSum(int arr[][3], int i, int j)
{
    cout << " Printing the sum->";
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {

            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3][3];

    cout << " Enter the elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cin >> arr[i][j];
        }
    }
    cout << " Printing the array " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    /* printRowSum(arr, 3, 3);
     printColSum(arr, 3, 3);*/
    int ansIndex = largestRowSum(arr, 3, 3);
    cout << " Max row is at index : " << ansIndex << endl;

    return 0;
}