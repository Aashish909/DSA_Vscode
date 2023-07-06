#include<iostream>
using namespace std;

void print(int arr[], int n, int start=0) { //write default argumenets always right to left
    for(int i=start; i<n; i++) {
        cout<<arr[i]<<endl;
    }
}




int main() {
    int arr[5]={1,5,3,7,3};
    int size=5;

    print(arr, size);
    cout<<endl;
    print(arr, size, 2);
}