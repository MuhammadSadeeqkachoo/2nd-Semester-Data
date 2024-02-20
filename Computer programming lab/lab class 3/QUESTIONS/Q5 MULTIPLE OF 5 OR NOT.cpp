#include <iostream>
#include <string>
using namespace std;

int main(){

    int b;
    cout<<"Enter b number : ";
    cin>>b;
    if(b%5==0&&b%7==0&&b%11!=0){
cout<<"*********************************************************"<<endl;
cout<<b<<" is multiple of 5 and divisible by 7 and not by 11"<<endl;
cout<<"*********************************************************"<<endl;}
return 0;}
