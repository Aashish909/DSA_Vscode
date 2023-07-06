#include<iostream>
using  namespace std;

int main() {

    int row;
    cout<<"enter value for row: "<<endl;
    cin>>row;

    int col;
    cout << "enter value for col: " << endl;
    cin >> col;

    //creating variable for 2d array
    int** arr= new int*[row];
    for(int i=0; i<row; i++) {
        arr[i]=new int[col];
    }

    //taking input 
    for(int i=0; i<row; i++) {
        for(int j=0;j<col; j++) {
            cin>>arr[i][j];
        }
    }

    //output
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing memory
    for (int i = 0; i < row; i++)
    {
       delete []arr[i];
    }
    delete[] arr;
}