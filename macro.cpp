
//macro a piece of code that replace a program   
 #include<iostream>
using namespace std;

#define pi 3
int main() {

    int r=5;
    //double pi = 3.14;
    double area = pi * r*r;
    cout<<"Area: " <<area<<endl;

}

//inline function 
inline int getmax(int a, int b) //like that