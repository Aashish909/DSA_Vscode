#include<iostream>
using namespace std;

int firstOcc(int arr[], int n , int key)
{
    int s=0;
    int e=n-1;
    int ans=0;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key > arr[mid])
        {
            s=mid+1;
        }
        else if(key < arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n , int key)
{
    int s=0;
    int e=n-1;
    int ans=0;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key > arr[mid])
        {
            s=mid+1;
        }
        else if(key < arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[7]= {0,2,3,3,3,3,5};
    cout<<" first occurrence of 3 at index "<<firstOcc(arr, 7, 3)<<endl;
    cout<<" last occurrence of 3 at index "<<lastOcc(arr, 7, 3)<<endl;

    return 0;
}