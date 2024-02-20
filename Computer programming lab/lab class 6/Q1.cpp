#include <iostream>

using namespace std;

void fun(string name,char grade,string reg){


    cout<<"**********************\n";
    cout<<"NAME  "<<name<<endl;
    cout<<"REG NO  "<<reg<<endl;
    cout<<"grade  "<<grade<<endl;
    cout<<"**********************\n";}

int main() {
    char grade;
    int marks;
    string reg,name;
    cout<<"Enter your Name : ";
    getline(cin,name);
    cout<<"Enter your marks : ";
    cin>>marks;
    cout<<"Enter your Reg No : ";
    cin>>reg;

    if(marks>=20&&40>marks){
        grade='D';}
    if(marks>=40&&60>marks){
        grade='C';}
    if(marks>=60&&80>marks){
        grade='B';}
    if(marks>=80&&100>marks){
        grade='A';}

    fun(name,grade,reg);
 return 0;}
