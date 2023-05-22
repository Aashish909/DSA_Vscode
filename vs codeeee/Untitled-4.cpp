#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1]="love";
    m[18]="you";
    m[3]="kumar";

    m.insert({5, " Bheem"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}