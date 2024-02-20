#include <iostream>

using namespace std;

int main()
{
    int larg;

    int ary[5]={20,30,40,50,70};//initialization of array

    larg=ary[0];//assigning first element of array to larg

    for(int i=0;i<5;i++)//[initialization of i] [condition for for-loop] [incrementing i]
    {
            if(ary[i]>larg)//condition for if statement
            {
                larg=ary[i];//assigning array element to larg
            }

    }
    cout<<"largest number in array is = "<<larg<<endl; //displaying the largest number

    return 0;
}
