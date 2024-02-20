#include <iostream>
using namespace std;

int main(){
    int ary[5];
    int maximum=ary[0];

    for(int i=0;i<5;i++){
        cout<<"\nEnter value for array : ";
        cin>>ary[i];
}

    for(int i=1;i<5;i++){
        if(ary[i]>maximum){
        maximum = ary[i];
        }
    }
    cout<<"*******************"<<endl;
    cout<<"Maximum value is = "<<maximum<<endl;
    cout<<"*******************"<<endl;

return 0;}
