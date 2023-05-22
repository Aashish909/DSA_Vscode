#include<iostream>
using namespace std;

int count_setbits(int n)  {
    int count=0;
    while(n>0)  {
        if(n&1==1)
        count++;
        n>>=1;
    }
    return count;
}
 int main()
 {
     int n;
     cin>>n;
     cout<<"answert is:"<<count_setbits(n)<<endl;
     return 0;
 }