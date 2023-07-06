#include <iostream>
#include <string>

using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++) //create arrray for count charac aters
    {
        char ch = s[i];

        int number = 0;

        if (ch >= 'a' && ch <= 'z') //lower case character aata h to
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';//uppercase character aata h to
        }
        arr[number]++; 
    }
    // find maximum occurrence character
    int maxi = 0, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans; // number change to character
    return finalAns;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Max character is " << getMaxOccCharacter(s) << endl;
}