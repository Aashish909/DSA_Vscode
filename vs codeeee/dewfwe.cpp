#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<int,5> a = {1,3,5,2,5};

    int size = a.size();

    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<" Element at second index: "<<a.at(2)<<endl;

    cout<<" Empty or not "<<a.empty()<<endl;

    cout<<" first element: "<<a.front()<<endl;

    cout<<" last element : "<<a.back()<<endl;
}