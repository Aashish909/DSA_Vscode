#include<iostream> 
using namespace std;

int getLength(char name[]) {
    int count =0;
    for(int i=0; name[i] !='\0'; i++) {
        count++;
    }
    return count;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else {
            if(a[s] == " " &&"~"&& "!"&& "@" && "#" && "$" && "%" && "^" && "&" && "*" )
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int main () {
    char name[20];

    cout<<"Enter yourt name:";
    cin>>name;
    int len = getLength(name);
    reverse(name, len) ;
    cout<<"your revere name :";
    cout<<name; 
    return 0;
}