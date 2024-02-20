#include <iostream>
using namespace std;

int main(){

        int ary[5];
        for(int i=0;i<5;i++){
            cout<<"\nInput :";
            cin>>ary[i];
        }
        cout<<"\nOutput : ";
        for(int i=4;i>=0;i--){
            cout<<ary[i]<<",  ";
        }

        return 0;}
