#include <iostream>

using namespace std;

int main(){
int power,base,result=1;
cout<<"enter base "<<endl;
cin>>base;
cout<<"enter power "<<endl;
cin>>power;


while(power!=0){
    result*=base;
    power--;
}
cout<<"Result = "<<result;
return 0;
}
