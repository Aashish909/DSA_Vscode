#include<iostream>
using namespace std;


    int reverse(int x)  {
        int 
        int ans=0;
        while(x!=0)  {
            int digit=n%10;
            ans=(ans*10)+digit;
            x=x/10;
        }
        return ans;
    }

int main()
{   
    int n;
    cout<<"take input for x:";
    cin>>n;
    reverse(n);
    cout<<n;
}