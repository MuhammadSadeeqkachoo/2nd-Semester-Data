#include <iostream>

using namespace std;

int main(){
    cout<<"Enter temperature in Fahrenheit = "<<endl;

    float f,k,c;
    cin>>f;

    c=(f-32)/1.8;
    cout<<"temperature in Celsius = "<<c<<endl;
    k=c+273;
    cout<<"temperatature in kelvin = "<<k;
    return 0;}
