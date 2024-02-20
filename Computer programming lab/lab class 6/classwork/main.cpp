#include <iostream>
#include<math.h>

//pre defined function return type and non return type
//void is non return type

using namespace std;


int myfunction(int,int);//declaration

int main()
{   int sum;
    cout<<"The sum is = ";
    myfunction(3,6);
    return 0;
}

int myfunction(int x,int y) //defination
{
    int sum=x+y;
    cout<<sum;
}
