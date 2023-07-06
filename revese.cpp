#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void rev_arr(arr[], int start, int end)
{
    if(start>=end)
    return ;
    int temp= arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    rev_arr(arr,start+1, end-1);
}
void print_arr(int arr[], int size)
{
    for(i=0; i<size; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]= {5,6,4,3,6,2};
    print_arr(arr,6);
    reverse_arr(arr,0,5);
    cout<<"reversed array is:\n";
    print_arr(arr, 6);
    return 0;
}