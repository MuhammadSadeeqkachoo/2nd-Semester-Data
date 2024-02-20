#include<iostream>
#include<math.h>

using namespace std;

 int deter(int,int,int);
 int root1(int,int,int);

int main(){
    int values[3];
    int a=values[0],b=values[1],c=values[2],d;

    do{
    cout<<"Enter non zero value for a = ";
    cin>>a;}while(a==0);
    cout<<"Enter value of b = ";
    cin>>b;
    cout<<"Enter value of c = ";
    cin>>c;

    d=deter(a,b,c);
    cout<<"determinant : "<<d;

    if(d>0){
        cout<<"The first root is = "<<root1(a,b,c)<<endl;
    }
    else if(d==0){
        cout<<"r1=r2="<<-b/(2*a)<<endl;
    }
    else if(d<0){

    }


    return 0;
}

int root1(int a,int b,int c){
    int d;
    int r1=(-b+sqrt(d))/(2*a);

}

int root2(int a,int b,int c){
    int d;
    int r2=(-b+sqrt(d))/(2*a);

}

int deter(int a,int b,int c)
{
    int d=b*b-4*a*c;
   // return d;
}

