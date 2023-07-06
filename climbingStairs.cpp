#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int countDistinctWays(int nStairs)
{

    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);

    return ans;
    
}
int main() {

    int n;
    int ans;
    cout<<"enter valuye for n: "<<endl;
    cin>>n;
    countDistinctWays(n);
    
    return 0;
}