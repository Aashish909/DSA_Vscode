#include<iostream>
using namespace std;

int count_set_bits(int n)  {

        int count =0;
        while(n>0)  {

            count+= (n&1);
            n>>=1;
        }
        return count;
}

int main()  
{
    int n;
    cin>>n;
    cout<<"answer is"<<count_set_bits(n);
}