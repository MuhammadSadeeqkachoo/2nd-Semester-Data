#include <iostream>
using namespace std;

int main(){
int c_id,unit,charges,surcharge;
cout<<"Enter customer ID : ";
cin>>c_id;
cout<<"Enter the number of units consumed : ";
cin>>unit;

if( unit >= 0 && unit <= 199 ){
charges=unit*1.20;}

else if( unit >= 200 && unit < 400 ){
charges=unit*1.50;}

else if( unit >= 400 && unit < 600 ){
charges=unit*1.80;}

else if( unit > 600 ){
charges=unit*2.00;}

if( charges > 400 ){
    surcharge=0.15*charges;}
cout<<"Customer IDNO : "<<c_id<<endl;
cout<<"Units consumed : "<<unit<<endl;
cout<<"Amount Charges : "<<charges<<endl;
cout<<"surcharges Amount :"<<surcharge<<endl;
cout<<"Net Amount paid by the customer : "<<charges+surcharge<<endl;
  return 0;}
