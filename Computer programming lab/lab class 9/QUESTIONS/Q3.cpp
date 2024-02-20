#include<iostream>

using namespace std;

int main(){
    string ary[2];
    string *p=ary;

cout<<"\nEnter your name : ";
cin>>*p;
cout<<"\nEnter your Reg no : ";
cin>>*(p+1);

cout<<"\nName : "<<*p;
cout<<"\nReg No : "<<*(p+1);
return 0;}
