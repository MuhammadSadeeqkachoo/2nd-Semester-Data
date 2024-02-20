#include<iostream>

using namespace std;

int main(){
    int total,no;
    cout<<"Enter total students : ";
    cin>>total;

    struct data{
    string name;
    int s,regno;
    }Student_t[total];

    for(int i=0;i<total;i++){
        cout<<"Enter student name : ";
        cin>>Student_t[i].name;
        cout<<"Enter student Reg No : ";
        cin>>Student_t[i].regno;
        cout<<"Enter semester No : ";
        cin>>Student_t[i].s;}

      cout<<"\nEnter Reg No to search student data : ";
      cin>>no;
      for(int i=0;i<total;i++){
        if(no==Student_t[i].regno){
            cout<<"***************************"<<endl;
            cout<<"Name : "<<Student_t[i].name<<endl;
            cout<<"Reg No : "<<Student_t[i].regno<<endl;
            cout<<"Semester : "<<Student_t[i].s<<endl;
            cout<<"\n***************************";}}
return 0;}
