#include <iostream>

using namespace std;

int main()
{

   int small,small2;//declaring integers small small2
   int aray[5]={6,3,7,8,10};//initialization of integer array aray


        if(aray[0]<aray[1]){
            small=aray[0];
            small2=aray[1];
        }
        else{
            small=aray[1];
            small2=aray[0];
        }



   for(int i=2;i<5;i++){
    if(aray[i]<small)//condition for if statement
        {
        small2=small;//assigning small value to small2 if condition is correct
        small=aray[i];//assigning array value to small
    }
    else if(aray[i]<small2)//condition for else if statement
    {
        small2=aray[i];//assigning aray value to small2 if condition of else if is true
    }
   }

cout<<"smallest element in array is = "<<small<<endl;//displaying smallest value of array
cout<<"second smallest element in array is = "<<small2<<endl;//displaying 2nd smallest value of array
    return 0;
}
