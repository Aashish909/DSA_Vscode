#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "take input for n:";
    cin>>n;

    int row = 1;
    int start=1;

    while(row<=n)   {

        start=n-row+1;
        cout<<start;
        start++;
    }
    int col=1;
    int star=1;
    star=(row-1)*2;
    while(col<=row)  {#

        cout<<star;
        star--;

    }
        int value= 1;
        while(row<=n)  {

            value=n-row+1;
            cout<<value;
            value--;

        }
        cout<<endl;
        row=row+1;
        
}

        