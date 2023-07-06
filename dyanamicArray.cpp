#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{

    /*
    int i=5;
    cout<<sizeof(i)<<endl;

    int* p=&i;
    cout<<sizeof(p)<<endl;

    char ch='q';
    cout<<sizeof(ch)<<endl;

    char* c = &ch;
    cout<<sizeof(c)<<endl;
    */
    int n;
    cout << "enter value for n: ";
    cin >> n;

    int *arr = new int[n]; // variable size array (heap memory)

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "Sum is " << ans << endl;
    return 0;
}