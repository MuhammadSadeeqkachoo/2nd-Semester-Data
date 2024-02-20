#include<iostream>

using namespace std;

int main(){

    int ary[10];
for( int j = 0; j < 10; j++ ){
    cout<<"Enter value for array : ";
    cin>>*(ary+j);}

cout<<"\nvalue of array = ";
for( int j = 0; j < 10; j++ ){
cout<< *(ary + j)<<", ";}
return 0;}
