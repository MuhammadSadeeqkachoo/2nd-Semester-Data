#include<iostream>
#include<math.h>

using namespace std;

int average(int *arr,int size){

for(int i=1;i<5;i++){
  *arr=*arr+*(arr+i);}
return *arr/size;}

int main(){
  int arr[5]={2,4,6,8,10};
  cout<<"Average of 2 4 6 8 10 \n";
  cout<<"Average = "<<average(arr,5);
return 0;}
