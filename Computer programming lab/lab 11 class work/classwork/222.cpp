#include<iostream>

using namespace std;

class rect{

private:
int w,h;
public:
int area(){
return w*h;}

rect();
rect(int x,int y){
h=x;
w=y;
};}

rect::rect(){
w=5;
h=5;
}


int main(){
rect r(4,4);
cout<<r.area();
rect a;
cout<<a.area();
}
