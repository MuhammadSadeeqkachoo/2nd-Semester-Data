#include<iostream>

using namespace std;

int main()
{
    int a,f=1;

    cout<<"Enter first number : ";
    cin>>a;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
        cout<<"Factorial = "<<f;

    return 0;
}
