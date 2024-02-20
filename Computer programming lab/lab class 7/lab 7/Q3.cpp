#include <iostream>

using namespace std;

int N;

int sum(int N){

if(N>0){
    N=N+sum(N-1);
    return N;
}
else
return 0;}


int main() {

cout<<"Enter Natural number : ";
cin>>N;
cout<<"The sum of Natural number : "<<sum(N);
  return 0;}
