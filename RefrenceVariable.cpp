#include<iostream>
using namespace std;

int& func(int a) {   //bad practice for fucntion return 'int&'
    int num=a;
    int &ans= num;
    return ans;
}
void update(int& p) {
    p++;
}
int main() {

   /*
   int i=5;
   int &j=i; //refrence variable ban gya 'j'
   cout<<i<<endl;
   i++;
   cout<<i<<endl;
   j++;
   cout<<j<<endl; 
   */
    int n=5;
    cout<<"before "<<n<<endl;
    update(n);
    cout<<"after "<<n<<endl;
}