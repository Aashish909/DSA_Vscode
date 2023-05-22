#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "take input for n:";
    cin>>n;

    int row = 1;
    // print 1st triangle
    int col=1;
    while(col<=row)  {

        cout<<col;
        col++;
    }
    // print 2nd star trinagle
    int star=n-row;
    while(star)   {
         
         cout<<"*";
         star--;
    }
    //print 3rd star trinagle
  int star=n-row;
    while(star)   {
         
         cout<<"*";
         star--;
    }
    //print 4th trinagle
    int start=row-1;
    while(start)   {

        cout<<start;
        start--;
    }
    cout<<endl;
    row=row++;
}