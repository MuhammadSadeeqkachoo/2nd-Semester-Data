#include<iostream>

using namespace std;

int main(){

    int ary[12];

for( int j = 0; j < 12; j++ ){
    cout<<"Enter value for array : ";
    cin>>*(ary+j);
}
for( int j = 0; j < 12; j++ ){
    cout<<"\t\tValue "<<j+1<<" = ";
    cout<<*(ary+j);
    if(j==2||j==5||j==8||j==11){
        cout<<endl;}}
return 0;}
