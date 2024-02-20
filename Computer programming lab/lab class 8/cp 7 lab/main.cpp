#include <iostream>
#define line cout<<endl;


using namespace std;

int main()
{
   int a,i;
   int  *s;
   s=&a;

   cout<<"Enter value :  ";
   cin>>a;

   for(i=0;i<5;i++){

    (*s)++;
   }
   cout<<"final result = "<<*s;





    return 0;
}
