#include <iostream>

using namespace std;

int main()
{
    int s0,s1,s2,out;

    cout<<"\tEnter first value = ";
    cin>>s0;
    cout<<"\tEnter second value = ";
    cin>>s1;
    cout<<"\tEnter third value = ";
    cin>>s2;

    if(s0==0&&s1==0&&s2==0){
        cout<<"\toutput = I0"<<endl;}
    if(s0==0&&s1==0&&s2==1){
        cout<<"\toutput = I1"<<endl;}
    if(s0==0&&s1==1&&s2==0){
        cout<<"\toutput = I2"<<endl;}
    if(s0==0&&s1==1&&s2==1){
        cout<<"\toutput = I3"<<endl;}
    if(s0==1&&s1==0&&s2==0){
        cout<<"\toutput = I4"<<endl;}
    if(s0==1&&s1==0&&s2==1){
        cout<<"\toutput = I5"<<endl;}
    if(s0==1&&s1==1&&s2==0){
        cout<<"\toutput = I6"<<endl;}
    if(s0==1&&s1==1&&s2==1){
        cout<<"\toutput = I7"<<endl;}

    cout<<"*************************"<<endl;
    cout<<"NAME Muhammad Sadeeq"<<endl;
    cout<<"Reg No 21PWCSE2028"<<endl;
    cout<<"Section C"<<endl;


    return 0;
}
