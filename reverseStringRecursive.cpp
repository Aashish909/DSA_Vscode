#include<iostream>
using namespace std;

void reverse(string& s, int i, int j) {  //pass by reference krna hoga tbhi
    cout<<"revrese call for "<<s<<endl;
    if(i >j) {
        return ;
    }

    swap(s[i],s[j]) ;//swap(s[i],s[s.length()-1-i]) \n i++; using only one pointer

    i++;
    j--;

    reverse(s, i, j);
}



int main() {
    string name = "abcde";
    reverse(name, 0,name.length()-1);
    cout<<endl;
    cout<<"reverse: "<<name<<endl;
    return 0;
}