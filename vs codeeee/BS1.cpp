#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
        return mid;
        }
        if(key > arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end= mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int even[6]= {4,9,13,5,6,1};
    int odd[7]= {3,7,5,0,1,4,6};

    int index=binarySearch(even, 6 ,13);
    cout<<"Index of 6 is "<<index<<endl;
    index=binarySearch(odd, 7, 0);
    cout<<" index of 6 is "<<index<<endl;
    return 0;
}