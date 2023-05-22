#include<iostream>
using namespace std;

void update(int arr[] , int n)   {
    cout<<"Inside the fucntion:";

    arr[0] = 100;

    for(int i = 0; i<3; i++)   {
        cout<<arr[i]<<" ";

    } cout<<endl;
    cout<<"gouing back to main fucntion;";
}
 int main()  {
     int arr[3] = {4,9,3};

     update(arr, 3);
     cout<<endl<<"printing in main fucntion"<<endl;
     for(int i =0; i<3; i++)   {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     return 0;
 }