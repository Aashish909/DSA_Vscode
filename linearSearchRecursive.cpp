#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k) {
    if(size==0) {
        return 0;
    }
    if(arr[0]==k) {
        return 1;
    }
    else {
        bool restPart = linearSearch(arr+1, size-1,k);
        return restPart;
    }
}
int main() {

    int arr[5]={4,2,6,1,7};
    int size=5;
    int key=0;

    bool ans=linearSearch(arr, size,key);
    if(ans) {
        cout<<"key found"<<endl;

    }
    else{
        cout<<"key not found"<<endl;
    }
}