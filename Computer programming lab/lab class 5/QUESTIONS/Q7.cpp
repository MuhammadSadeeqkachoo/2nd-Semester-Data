#include <iostream>
using namespace std;

int main(){

    int ary[5],k;
    for(int i=0;i<5;i++){
        cout<<"enter element for array : ";
        cin>>ary[i];
    }

    cout<<"Enter key element : ";
    cin>>k;

    for(int i=0;i<5;i++){
          if(k==ary[i]){
          cout<<"index number of matched element is = "<<i<<endl;
          }
    }
return 0;}
