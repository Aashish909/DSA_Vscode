#include<iostream>
using namespace std;

class A{
    public:
        void func(){ //function overload
            cout<<"first function"<<endl;
        }
        void func(string name){
            cout<<"second function"<<name<<endl;
        }
};
int main(){

    A obj;
    obj.func();
}