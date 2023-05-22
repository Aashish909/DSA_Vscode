#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter for a and b:";
    cin>>a>>b;

    int ans=1;

    for(int i=1; i<=b; i++)  {
        ans = ans * a;
    }

    cout<<"Answer is:"<<ans<<endl;

    int c,d;
    cout<<"Enter for a and b:";
    cin>>c>>d;

    ans=1;

    for(int i=1; i<=d; i++)  {
        ans = ans * c;
    }

    cout<<"Answer is:"<<ans<<endl;

    return 0;
}