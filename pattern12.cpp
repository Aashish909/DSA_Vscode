#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "take input for n:";
    cin>>n;

    int row = 1;
    char value=1;
   
    while(row<=n)   {
         
          int col = 1;
           char ch = 'A';
          int start='A';
          while(col<=n)    {
              
              cout<<start;
              start=start+1;
              col=col+1;
          }
          cout<<endl;
          row=row+1;
    }
}