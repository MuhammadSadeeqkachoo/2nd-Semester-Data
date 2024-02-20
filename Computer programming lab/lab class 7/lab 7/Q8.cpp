#include <iostream>
using namespace std;

int calpower(int base, int power)
{
    if (power != 0)
        return (base*calpower(base, power-1));
    else
        return 1;}

int main(){
       int base, power, result;
    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter power number(positive integer): ";
    cin >> power;
    result = calpower(base, power);
    cout << base << "^" << power << " = " << result;

    return 0;}

