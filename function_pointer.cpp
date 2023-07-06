#include<iostream>
using namespace std;


void print(int *ptr) {
    cout<<"p-> "<<ptr<<endl;
    cout<<"*p=> "<<*ptr<<endl;
}
void update (int *p) {
    p=p+1;    //will give the same address
    cout<< "inside address of p "<<p<<endl;
    cout << "inside address of p " <<*p << endl;
    // *p = *p+1;
}

int getSum(int arr[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum +=arr[i];
    }
    return sum;
}
int main() 
{ 
   
    int value=32;

    int *ptr =&value;

   // print(ptr);
    cout<<"before update "<<ptr<<endl;
    update(ptr);
    cout<<"after update "<<ptr<<endl;
    
   /*
   int arr[6] ={4,6,2,8,2,5};

   cout<<"Sum is "<<getSum(arr+3, 3)<<endl;
    */
   
}