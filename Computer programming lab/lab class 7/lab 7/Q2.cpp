#include <iostream>
using namespace std;



int sum(int x=3,int y=6){
   int result=x+y;
   cout<<"Sum of two numbers are = "<<result<<endl;
}

int main() {
    int a,b;
    cout<<"Enter first value ";
    cin>>a;
    cout<<"Enter second value ";
    cin>>b;
    if( a!=0 && b!=0 ){
            sum( a , b );
            }
    else if( a==0 || b==0 ){
        sum();
    }
return 0;}
