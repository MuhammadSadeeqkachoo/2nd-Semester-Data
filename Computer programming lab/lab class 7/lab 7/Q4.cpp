#include <iostream>
using namespace std;

int Odd;

int sum(int Odd){
   if(Odd>0){
    Odd=Odd+sum(Odd-2);
    return Odd;
   }
   else return 0;

}

int main(){
    do{
    cout<<"Enter odd number :";
    cin>>Odd;}while(Odd%2==0||Odd<=0);
    cout<<"Sum of Odd = "<<sum(Odd);
  return 0;}
