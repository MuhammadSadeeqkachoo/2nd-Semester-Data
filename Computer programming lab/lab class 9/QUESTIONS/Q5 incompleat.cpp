#include<iostream>
using namespace std;

int sum(int *a,int *b){
   *a=*a+*b;
return *a;}

int main(){

    int arr[5];
    int *pointer,num1,num2,var;
    pointer=arr;
    for(int i=0;i<5;i++){
    cout<<"Enter array value "<<i+1<<" : ";
    cin>>*(pointer+i);}

    cout<<"\n\tEnter two numbers "<<endl;
    cin>>num1;
    cin>>num2;

    pointer=arr;
    *(pointer+1)=num1;
    *(pointer+2)=num2;

    var=sum((pointer+1),(pointer+2));

    pointer=arr;
    *pointer=var;
    cout<<"Addition = "<<*pointer;
return 0;}
