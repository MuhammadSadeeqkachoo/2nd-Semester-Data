#include <iostream>

using namespace std;

int main()
{

    //bitwise operators & (AND),|(OR),^(XOR)!(NOT),<<SHIFT LEFT.>>SHIFT RIGHT

    //RATIONAL /comparison ==,<,>,!=,>=,<=
    //logical /compound &&(logical OR) !NOT
    //ternary operator
    //Selection statement if/else,switch

  /*  int x=16;
    x--;
    if(!(x>=10||x<=15)){
            cout<<"success";
    }
    else if(x<15){
        cout<<"success x2";
    }
    else{
        cout<<"failed";
    }
int y =6,z=5;
cout<<endl;
cout<<(y<z? "true":"false");
int x=(y==5?10:1);
cout<<x;*/

int a;
cout<<"Enter option "<<endl;
cin>>a;
switch(a){
     case 0:
     cout<<"failed"<<endl;
     break;
     case 1:
     cout<<"success"<<endl;
     break;
     default:
        cout<<"wrong number"<<endl;
        break;
}







    return 0;
}
