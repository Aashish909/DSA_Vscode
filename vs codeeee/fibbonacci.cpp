#include<iostream>
using namespace std;

int main()
{
    int n;
    int a=0;
    int b=1;
    cout<<"Enter the value for n:";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        int next_number=a+b;
        cout<<next_number<<" ";
        a=b;
        b=next_number;
    }
 }