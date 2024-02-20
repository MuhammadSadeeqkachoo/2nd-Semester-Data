#include<iostream>
using namespace std;

int f(int n);

int main() {
int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "*****************************"<<endl;
  cout << "Factorial of "<<n<<" = "<<f(n);
  cout << "\n*****************************"<<endl;
  return 0;}

int f(int n) {
  if(n > 1)
    return n * f(n - 1);
  else
    return 1;}
