#include<iostream>
using namespace std;

int main() 
{
    /*
    int arr[10]={2,4,6,2};
    cout<<"address of first block: "<<arr<<endl;
    cout<< "address of first block: " << &arr << endl;
    cout << "address of first block: " << &arr[1] << endl;
    cout << "address of first block: " << arr[1] << endl;
    cout << "value of at first block: " << *arr << endl;
    cout << "value of at  2nd block: " << *arr+1 << endl;

    int temp[10];
    cout<<"printing temp "<<sizeof(temp)<<endl;
    cout << "printing &temp " << sizeof(&temp) << endl;
    cout << "printing temp " << sizeof(*temp) << endl;
    cout << "printing &temp " << sizeof(&temp+1) << endl;

    int *ptr=&temp[0];
    cout<<"printing ptr "<<sizeof(ptr)<<endl;
    cout << "printing ptr " << *ptr << endl;
    cout << "printing ptr " << &ptr << endl;
    cout << "printing ptr " << *ptr+1 << endl;
    */

   int arr[10];
    int *ptr = &arr[0];
   cout<<"=> "<<ptr<<endl;
   ptr =ptr+1;
   cout << "=> " << ptr << endl;
   cout << "*=> " << *ptr << endl;
   cout << "&=> " << &ptr << endl;
   return 0;
}