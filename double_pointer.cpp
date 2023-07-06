#include <iostream>
using namespace std;

// void update(int **p)
// {
//     // p=p+1; no change

//     //*p = *p + 1; p change

//     // **p = **p +1; i value change
// }
// int main()
// {

/*
 int i=10;
 int* p = &i;
 int** p2= &p;


 cout<< " &i "<< &i <<endl;
 cout<<" p "<< p<<endl;
 cout<<" *p2 "<<*p2<<endl;

 cout<<endl;
 cout<<"before "<<i<<endl;
 cout << "before " << p << endl;
 cout << "before " << p2 << endl;
 update(p2);
 cout<<"after "<<i<<endl;
 cout << "after " << p << endl;
 cout << "after " << p2 << endl;

1) MCQ
 int first =8;
 int second = 18;
 int *p = &second;
 *p = 9;
 cout<<first <<"  "<<second<<endl;

 2) MCQ
 int first =6;
 int *p=&first;
 int *q = p;
 (*q)++;
 cout<<first <<endl;

 3)MCQ
 int first =8;
 int *p= &first;
 cout<<(*p)++<<"  ";
 cout<<first<<endl;

 4)MCQ
 int *p = 0;
 int first = 110;
 *p = first; //////segmentation error
 cout<<*p<<endl;

 5)MCQ
 int first= 8;
 int second =11;
 int *third = &second;
 first = *third;
 *third = *third+2;
 cout<<first <<"  "<<second<<endl;

6)MCQ
int first =110;
int *p= &first;
int **q=&p;
int second = (**q)++ + 9;
cout<<first<<"  "<<second<<endl;

7)MCQ
int first =100;
int *p=&first;
int **q=&p;
int second= ++(**q);
int *r = *q;
++(*r);
cout<<first<<"  "<<second<<endl;
*/
void update(int **p)
{
    ++(**p);
}
int main()
{
    int num = 110;
    int *ptr = &num;
    update(&ptr);
    cout << num << endl;
}
