#include <iostream>

using namespace std;

class rect{
private:
int w,h;
public:
int area(){
return h*w;
};

void setvalues(int,int);
};
void rect::setvalues(int x,int y){
w=x;
h=y;
}

int main()
{
rect r;
r.setvalues(3,3);
cout<<r.area();
    return 0;
}
