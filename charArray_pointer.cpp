#include<iostream>
using namespace std;

int main(){

    int arr[]={2,5,3,2};
    char ch[]="adcb";

    cout<<"arr-> "<<arr<<endl;
    cout<<"ch-> "<<ch<<endl;

    char *c=&ch[0];
    cout<<"ch c-> "<<c<<endl;
}