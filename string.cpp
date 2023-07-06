#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("love");
    s.push("you");
    s.push("kumar");

    cout<<" before pop, top element: "<<s.top()<<endl;

    s.pop();

    cout<<"after pop, top element: "<<s.top()<<endl;
    cout<<" empty opr not "<<s.empty();
}