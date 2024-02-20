#include <iostream>

using namespace std;

int main()
{
/*int x;
cout<<"enter number";
cin>>x;

if(x==1){
    goto label1;
}
else{
        goto label2;
}

label1:
    cout<<"the value is true "<<endl;
    return 0;
label2:
    cout<<"the value is false"<<endl;
    return 0;*/

int x=5;
test:
    if(x!=0){
        cout<<"This is goto loop"<<endl;
        x--;
        goto test;
    }
    cout<<"finished"<<endl;



return 0;
}
