#include<iostream>
using namespace std;

int power(int n) {

    if(n==0) 
        return 1;

    int smallProblem=power(n-1);
    int bigProblem=2*smallProblem;    
    
    return bigProblem;
}



int main() {
    int n;
    cin>>n;

    int ans= power(n);

    cout<<"Ans: "<<ans<<endl;


}