#include <iostream>
using namespace std;
int fib(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // recursive call
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the value for n:";
    cin >> n;
    fib(n);
    cout << "fibonacci series: ";
    for (int i = 0; i <= n; ++i)
    {
        std::cout << fib(i) << " ";
    }
}