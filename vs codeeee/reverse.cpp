#include<iostream>
using namespace std;


    int reverse(int x)  {

        int ans=0;
        while(n!=0)  {
            int digit=n%10;
            ans=(ans*10)+digit;
            x=x/10;
        }
        return ans;
    }

int main()
{   
    int x;
    cout<<"take input for x:";
    cin>>x;
    reverse(int x);
    cout<<x;
}