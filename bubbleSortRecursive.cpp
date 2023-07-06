#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size) {

    if(size==0 || size==1){
        return 1;
    }

    for(int i=0; i<size-1; i++) {
        if(arr[i]> arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,size-1);
}
int main() {
    int arr[5]={4,6,2,6,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, 5);
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
}