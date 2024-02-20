#include <iostream>
#include<math.h>

using namespace std;


int myfun(int x=2,int y=3){
     cout<<"this is int"<<endl;
     return x+y;
}

double myfun(double x,double y){

cout<<"this is double "<<endl;
return x+y;
}

int myfun(int x,int y,int z){

cout<<"this is int three para "<<endl;
return x+y+z;
}

template <class mytype>
mytype myfunction(mytype x,mytype y){
return x+y;
}

void recursive(){
   static int x=10;
if(x>0){
    cout<<"still inside function"<<endl;
    x--;
    recursive();
    }
    else{
        cout<<"function exit"<<endl;
    }
    }



    int recursive(int x){
    if(x>1){
        return x*recursive(x-1);
    }
    else{
        return 1;
    }}

int main()
{
    cin>>recursive(int x);
}


