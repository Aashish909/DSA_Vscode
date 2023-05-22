#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "take input for n:";
    cin>>n;

    int row = 1;

    while(row<=n)  {
          
           int col=1;
            int value=row;

           while(col<=row)  {
            cout<<value;
            value++;
            col=col+1;
           }
           cout<<endl;
           row= row+1;
    }

}