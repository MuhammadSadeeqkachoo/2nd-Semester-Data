#include <iostream>
using namespace std;

int main(){
int ary[12],value_no=1;

for(int i=0;i<12;i++){
    cout<<"Enter values for array : ";
    cin>>ary[i];
}

for(int j=0;j<12;j++){
    cout<<"\t\tValue "<<value_no<<" = "<<ary[j];
    value_no++;
if(j==2){
    cout<<"\n";
}
else if(j==5){
    cout<<"\n";
}
else if(j==8){
    cout<<"\n";
}
}
return 0;}
