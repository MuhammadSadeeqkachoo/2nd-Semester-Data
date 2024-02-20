#include <iostream>

using namespace std;

void minmax(){
    int ary[4],max,min;
    for(int i=0;i<4;i++){
        cout<<"Enter integer :";
        cin>>ary[i];}

        max=ary[0];
        min=ary[0];

for(int i=1;i<4;i++){

    if(max<ary[i]){
       max=ary[i];}}

    for(int i=1;i<4;i++){

    if(min>ary[i]){
      min=ary[i];}}

    cout<<"Maximum value is = "<<max<<endl;
    cout<<"Minimum value is = "<<min<<endl;}

int main(){
minmax();
return 0;}
