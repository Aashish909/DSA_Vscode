#include<iostream>
using namespace std;

//head recursion
int printCount (int n) {

    if(n==0) {
        return 1;
    }
    cout << n << endl;  //bc of this line
    printCount(n - 1);
}
//tail recursion
int printCount(int n)
{

    if (n == 0)
    {
        return 1;
    }
    printCount(n - 1);
    cout << n << endl;
}
int main() {
    int n;
    cin>>n;
    cout<<endl;
    printCount(n);
    
}