#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size)  {

    for(int i=0; i<size; i+=2)  {
        if(i+1 < size)  {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n )  {

    for(int i=0; i<n; i++)  {
        cout<<arr[i]<<" ";

    }cout<<endl;
}

int main()
{
    int even[8] = {5,3,8,4,9,2,0,1};
    int odd[5] = {9,1,8,4,0};

    swapAlternate(even, 8);
    printArray(even, 8);
    swapAlternate(odd, 5);
    printArray(odd, 5);
}