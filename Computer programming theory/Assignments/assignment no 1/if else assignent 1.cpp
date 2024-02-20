#include<iostream>

using namespace std;

int main(){
int s0,s1,s2;
cout<<"\tEnter value for s0 = ";
cin>>s0;
cout<<"\tEnter value for s1 = ";
cin>>s1;
cout<<"\tEnter value for s2 = ";
cin>>s2;
if(s2==0)
{
if(s1==0)
{
if(s0==0)
{cout<<"\tOUTPUT = I0 ";
}
else
{cout<<"\tOUTPUT = I1";
}
}
else
{
if(s0==0)
{cout<<"\tOUTPUT = I2";
}
else
{cout<<"\tOUTPUT = I3";}}}
else
{
if(s1==0)
{
if(s0==0)
{cout<<"\tOUTPUT = I4";}
else
{cout<<"\tOUTPUT = I5";}}
else
{
if(s0==0)
{cout<<"\tOUTPUT = I6 ";}
else
{cout<<"\tOUTPUT = I7 ";}}}
return 0;}
