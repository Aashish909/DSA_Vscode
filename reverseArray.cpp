#include<iostream>

using namespace std;

void reverse(int arr[], int n)  {
    int start = 0;
    int end = n-1;
    while(start <= end)  {
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}

void printArray(int arr[], int n)  {
    for(int i= 0; i<n; i++)  {
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}


int main()
{
    int arr[6] = {4,7,2,6,0,3};
    int brr[5] = {8,6,1,0,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

}