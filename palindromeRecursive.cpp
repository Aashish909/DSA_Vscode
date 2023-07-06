#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j) {
    if(i > j) {
        return 1;
    }

    if(str[i]!= str[j])
        return 0;
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}
int main() {
    string name = "aba";

    bool isPalindrome =checkPalindrome(name, 0,name.length()-1);

    if(isPalindrome) {
        cout<<"this is palindrome."<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
}