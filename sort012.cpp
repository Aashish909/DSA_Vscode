#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortArray(int arr[], int n)
{
    int i=0;
    int j=0;
    int k=n-1;
    
    while(j<=k)
    {
        if(arr[j]==0)
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
        if(arr[j]==1)
        {
            j++;
        }
        if(arr[j]==2  &&j<k)
        {
            swap(arr[j], arr[k]);
            k--;
        }
        
    }
}
int main()
{
    int arr[10]={1,0,2,0,1,1,2,0,1,2};
    sortArray(arr, 10);
    printArray(arr, 10);
    return 0;
}