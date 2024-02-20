#include <iostream>

using namespace std;

int main (){

     int ary[10],   n=1,    sum=0,  average;

     for(int i=0;i<10;i++){
     cout<<"Enter "<<n<<" value for array : ";
     cin>>ary[i];
     n++;
     }

     for(int j=0;j<10;j++){
     sum=sum+ary[j];
     }

     average=sum/10;

     cout<<"\naverage of all elements is = "<<average;
     return 0 ;}
