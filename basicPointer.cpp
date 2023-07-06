#include<iostream>
using namespace std;
int main()  {
    // int num =5;
    // cout<<num<<endl;
    // int *ptr = &num;
    // cout<<"*ptr  is "<<ptr<<endl;

    // cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    // cout << "size of pointer is " << sizeof(*ptr) << endl;

    float f= 10.5;
    float p=2.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<<*ptr <<" "<<f<<" "<<p;
}