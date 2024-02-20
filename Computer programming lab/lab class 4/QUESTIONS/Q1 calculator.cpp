#include <iostream>
using namespace std;

int main(){
    int num,num2;
    char op;
    while(true){
    cout<<"\nEnter first number : ";
    cin>>num;
    cout<<"\nEnter operator : ";
    cin>>op;
    cout<<"\nEnter second number : ";
    cin>>num2;

    switch(op){
    case '+':
    cout<<"\nAddition "<<num2<<" + "<<num2<<" = " <<num+num2<<endl;
    break;
    case '-':
    cout<<"\nSubtraction "<<num2<<" - "<<num2<<" = " <<num-num2<<endl;
    break;
    case '*':
    cout<<"\nMultiplication "<<num2<<" * "<<num2<<" = " <<num*num2<<endl;
    break;
    case '/':
    cout<<"\nDivision "<<num2<<" / "<<num2<<" = " <<num/num2<<endl;
    break;}}
return 0;}
