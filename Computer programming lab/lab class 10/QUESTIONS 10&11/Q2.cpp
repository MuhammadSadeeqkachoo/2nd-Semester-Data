#include<iostream>
using namespace std;

struct movie{
   string title;
   int year;
   }arr[3];

int main(){

    for(int i=0;i<3;i++){
    cout<<"\nEnter Movie name :";
    cin>>arr[i].title;
    cout<<"\nEnter year :";
    cin>>arr[i].year;}

    for(int i=0;i<3;i++){
        cout<<"\nMovie : "<<arr[i].title<<endl;
        cout<<"year :"<<arr[i].year;}
return 0;}
