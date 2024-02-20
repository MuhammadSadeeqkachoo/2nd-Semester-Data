#include<iostream>

using namespace std;

  class meter{
  private:
     int time;
     int distance_cover;

  public:
    meter(int t,int d){
    cout<<"THIS IS CONSTRUCTOR "<<endl;
    time=t;
    distance_cover=d;
    cout<<"THE SPEED OF CAR = "<<speed()<<" km/h"<<endl;}

   int speed(){
   return distance_cover/time;}

   ~meter(){
   cout<<"THIS IS DESTRUCTOR "<<endl;}
   };

 int main(){
     meter car(20,500);
 return 0;}
