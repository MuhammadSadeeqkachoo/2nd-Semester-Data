#include <iostream>

using namespace std;

int main()
{
   int value;
   int  *s;
   s=&value;

   cout<<"Enter value :  ";
   cin>>value;

   for(int i=0;i<5;i++){
    (*s)++;}

   cout<<"final result = "<<*s;
    return 0;}
