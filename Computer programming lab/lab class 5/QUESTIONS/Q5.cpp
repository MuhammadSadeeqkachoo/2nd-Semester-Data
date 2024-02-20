#include <iostream>
using namespace std;

int main(){

        int one[5],two[5];
        for(int i=0;i<5;i++){
            cout<<"\nEnter elements for first array :";
            cin>>one[i];
        }

        cout<<"\n********************************************************\n";

        for(int i=0;i<5;i++){
            cout<<"\nEnter elements for second array :";
            cin>>two[i];
        }

        for(int i=0;i<5;i++){
            cout<<"Sum of element by element= "<<one[i]+two[i]<<endl;
        }
return 0;}
