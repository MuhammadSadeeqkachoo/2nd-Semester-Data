#include <iostream>

using namespace std;

bool prime(int x){

for(int i=1;i<=x/2;++i){

        if(x%i==0&&i!=1){

            return false;}}

        return true;}

int main(){
    int x;
    bool isprime;
    cout<<"Enter a number : ";
    cin>>x;
    isprime=prime(x);

    if(isprime)
        cout<<"prime Number";
    else
        cout<<"Composite Number";
return 0;}
