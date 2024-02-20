#include <iostream>

using namespace std;

int main()
{
    int a,b,sum=0;
    cout<<"enter minimum number : ";
    cin>>a;
    cout<<"enter maximun number : ";
    cin>>b;

    for(a+1;a<b;a++){
        if(a%2==0){
            sum=sum+a;
        }

    }
    cout<<"Sum of even number between a and b = "<<sum;
return 0;}
