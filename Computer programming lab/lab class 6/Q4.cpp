#include<iostream>

using namespace std;

void factorial(){

    int x,f=1;

    cout<<"Enter first number : ";
    cin>>x;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    cout<<"Factorial = "<<f;}

int main(){
factorial();
return 0;}
