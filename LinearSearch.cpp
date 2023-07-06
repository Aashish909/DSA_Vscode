#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)  {

    for(int i=0; i<size; i++)  {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}


int main()   
{
    int arr[10] = {1,2,3,4,6,5,7,8,9,11};
    cout<<"ENter the key:";
    int key;
    cin>>key;
    bool found = search(arr, 10, key);
    if(found)  {
        cout<<"Key is present";
    }
    else {
        cout<<"Key is not present";
    }
}