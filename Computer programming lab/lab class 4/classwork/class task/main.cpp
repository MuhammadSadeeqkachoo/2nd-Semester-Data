#include <iostream>

using namespace std;

int main()
{
int per=0,b;
int coke=0,coffee=0,tea=0,orange=0;

while(b!=-1){
cout<<"\t*********************************************"<<endl;
cout<<"\tPlease input the favorite beverage of person #"<<per+1<<endl;
cout<<"\t1.Coffee  2.Tea  3.Coke  4.Orange Juice"<<endl;
cout<<"\tChoose 1,2,3 or 4 from the above menu or -1 to exit the program\n";
cout<<"\t*********************************************\n\t";

cin>>b;

if(b==1){
    coffee++;
    per++;

}
else if(b==2){
    tea++;
    per++;

}
else if(b==3){
    coke++;
    per++;

}
else if(b==4){
    orange++;
    per++;

}

}
cout<<"\t*********************************************"<<endl;
cout<<"\tThe total number of people surveyed is "<<per<<" the results are as follows "<<endl;
cout<<"\t*********************************************"<<endl;
cout<<"\tbeverage"<<"   "<<"Number of votes"<<endl;
cout<<"\t*********************************************"<<endl;
cout<<"\tcoffee"<<"   "<<coffee<<endl;
cout<<"\ttea"<<"   "<<tea<<endl;
cout<<"\tcoke"<<"   "<<coke<<endl;
cout<<"\torange juice"<<"   "<<orange<<endl;


    return 0;
}
