#include<iostream>

using namespace std;

int main(){

    string name,regno;
    string *n;

    cout<<"Enter your name :";
    cin>>name;
    cout<<"\nEnter your reg no ";
    cin>>regno;

    n=&name;
    cout<<"\nyour name : "<<*n;
    n=&regno;
    cout<<"\nyour reg no = "<<*n;
return 0;}
