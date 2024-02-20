#include <iostream>
using namespace std;

int main() {
    int a,b;
    int *p;
    cout << "Enter first value : "<<endl;
    cin>>a;
    cout << "Enter second value : "<<endl;
    cin>>b;
    a=a+b;
    p=&a;
    cout<<"Pointer variable value = "<<*p<<endl;
    return 0;
    }
