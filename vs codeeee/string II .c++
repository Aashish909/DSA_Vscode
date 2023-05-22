#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

void reverseString(string &str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

string reverseWords(string s) {
    string temp ="";
    string res ="";

    for(int i= 0; i<s.size(); i++) {
        while( i<s.size() && s[i] != ' ') {
            temp += s[i];
            i++;
        }

        if( temp != "") {
            if( res != "") {
              reverseString(temp, 0, temp.size()-1)  ;
              res = temp + " " + res;
            }
            else {
                
                reverseString(temp, 0, temp.size()-1);
                res = temp;
            }
            temp = "";
        }
    }
    return res;
}
int main()
{
    string str = " The sky is  blue  ";
    cout << str << endl;

    str = reverseWords(str);
    cout << str << endl;
    
    return 0;
}