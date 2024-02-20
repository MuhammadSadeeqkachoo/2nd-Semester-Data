#include <iostream>
using namespace std;

int main() {

    int num=10, num2=5, num3=15;
    if (num >= num2) {
        if (num >= num3)
            cout << "Largest number: " << num;
        else
            cout << "Largest number: " << num3;}
    else {
        if (num2 >= num3)
            cout << "Largest number: " << num2;
        else
            cout << "Largest number: " << num3;}

    return 0;}
