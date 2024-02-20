#include<iostream>

using namespace std;


int main(){

    int s0,s1,s2;
    string M_SADEEQ;

    cout<<"\tEnter value for s0 = ";
    cin>>s0;
    cout<<"\tEnter value for s1 = ";
    cin>>s1;
    cout<<"\tEnter value for s2 = ";
    cin>>s2;

    M_SADEEQ =(s2==0&&s1==0&&s0==0)
    ?"\t Output = I0":"";
    cout<<M_SADEEQ;

    M_SADEEQ =(s2==0&&s1==0&&s0==1)
    ?"\t Output = I1":"";
    cout<<M_SADEEQ;

    M_SADEEQ =(s2==0&&s1==1&&s0==0)
    ?"\t Output = I2":"";
    cout<<M_SADEEQ;

    M_SADEEQ =(s2==0&&s1==1&&s0==1)
    ?"\t Output = I3":"";
    cout<<M_SADEEQ;

    M_SADEEQ =(s2==1&&s1==0&&s0==0)
    ?"\t Output = I4":"";
    cout<<M_SADEEQ;

    M_SADEEQ =(s2==1&&s1==0&&s0==1)
    ?"\t Output = I5":"";
    cout<<M_SADEEQ;

    M_SADEEQ =(s2==1&&s1==1&&s0==0)
    ?"\t Output = I6":"";
    cout<<M_SADEEQ;

    M_SADEEQ =(s2==1&&s1==1&&s0==1)
    ?"\t Output = I7":"";
    cout<<M_SADEEQ;

return 0;}
