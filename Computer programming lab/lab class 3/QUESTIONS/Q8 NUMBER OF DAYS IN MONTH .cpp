#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter Day number = ";
    cin>>a;

    switch(a){
    case 1:
    cout <<"January days = "<<31;break;
    case 2:
    cout <<"February days = "<<28<<"or"<<29;break;
    case 3:
    cout <<"March days = "<<31;break;
    case 4:
    cout <<"April days = "<<30;break;
    case 5:
    cout <<"May days = "<<31;break;
    case 6:
    cout <<"June days = "<<30;break;
    case 7:
    cout <<"July days = "<<31;break;
    case 8:
    cout <<"August days = "<<31;break;
    case 9:
    cout <<"September days = "<<30;break;
    case 10:
    cout <<"October days = "<<31;break;
    case 11:
    cout <<"November days = "<<30;break;
    case 12:
    cout <<"December days = "<<31;break;
    default:
    cout <<"Invalid month number";break;}
return 0;}
