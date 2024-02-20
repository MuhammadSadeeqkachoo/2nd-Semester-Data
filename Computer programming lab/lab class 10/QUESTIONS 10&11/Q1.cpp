#include<iostream>
using namespace std;

struct phone{
    string ac,ex,n;
    };

int main(){
    phone my={"(909)","111","6500"};
    phone your;
    cout<<"Enter area code : ";
    cin>>your.ac;
    cout<<"Enter exchange : ";
    cin>>your.ex;
    cout<<"Enter number : ";
    cin>>your.n;
cout<<"\n\tMy number is "<<my.ac<<" "<<my.ex<<" "<<my.n<<endl;
cout<<"\tYour number is "<<"("<<your.ac<<")"<<" "<<your.ex<<" "<<your.n<<endl;
return 0;}
