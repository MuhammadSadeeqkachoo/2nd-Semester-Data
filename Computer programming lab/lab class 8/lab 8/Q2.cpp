#include <iostream>

using namespace std;

int main() {
    int a,b;
    int *x,*y,t;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;

    x=&a;
    y=&b;

    t=*x;
    *x=*y;
    *y=t;

    cout<<"\nAFTER SWAPPING\n"<<endl;
    cout<<"The value of a = "<<a<<endl;
    cout<<"The value of b = "<<b<<endl;
  return 0;}
