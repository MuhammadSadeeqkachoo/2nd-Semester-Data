#include<iostream>
#include<math.h>

using namespace std;

    int values[3];
    int a=values[0],b=values[1],c=values[2],d;
    float r1,r2;
    int deter(int,int,int);
    void roots(int);

int main(){

    do{
    cout<<"Enter non zero value for a = ";
    cin>>a;}while(a==0);
    cout<<"Enter value of b = ";
    cin>>b;
    cout<<"Enter value of c = ";
    cin>>c;

    d=deter(a,b,c);
    roots(d);

    return 0;}

void roots(int){

        cout<<"\nDiscriminant = "<<d<<endl;

    if(d>0){
            r1 = (-b + sqrt(d)) / (2*a);
            cout<<"\nFirst root = "<<r1<<endl;
            r2 = (-b - sqrt(d)) / (2*a);
            cout<<"\nSecond root = "<<r2<<endl;}

    else if(d==0){
            r1 = r2 = -b/(2*a);
            cout<<"\nBoth roots are equal = "<<r1<<endl;}

    else if(d<0){
            r1=-b/(2*a);
            r2=sqrt(-d)/(2*a);
            cout<<"\nFirst root = "<<r1<<endl;
            cout<<"\nSecond root = "<<r2<<endl;}}

int deter(int a,int b,int c){
    int d=b*b-4*a*c;
    return d;}

